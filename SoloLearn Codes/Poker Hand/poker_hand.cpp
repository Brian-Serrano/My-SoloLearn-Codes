#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <unordered_set>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	map<string, int> rankValues = {
		{"2", 2}, {"3", 3}, {"4", 4}, {"5", 5}, {"6", 6}, {"7", 7}, {"8", 8}, 
		{"9", 9}, {"10", 10}, {"J", 11}, {"Q", 12}, {"K", 13}, {"A", 14}
	};
	string hand;
	getline(cin, hand);
	stringstream ss(hand);
	vector<int> rank, rankFreq;
	unordered_set<char> suitFreq;
	map<int, int> freq;
	while (getline(ss, hand, ' ')) {
		int r = rankValues[hand.substr(0, hand.length() - 1)];
		freq[r] = freq.find(r) == freq.end() ? 1 : freq[r] + 1;
		rank.push_back(r);
		suitFreq.insert(hand[hand.length() - 1]);
	}
	sort(rank.rbegin(), rank.rend());
	bool rankOrder = true;
	int pairsCount = 0;
	for (size_t i = 0; i < rank.size(); i++) {
		if (freq[rank[i]] == 2) pairsCount++;
		rankFreq.push_back(freq[rank[i]]);
		if (i > 0 && rank[i] + 1 != rank[i - 1]) rankOrder = false;
	}
	if (suitFreq.size() == 1 && rankOrder && rank[0] == 14) cout << "Royal Flush";
	else if (suitFreq.size() == 1 && rankOrder) cout << "Straight Flush";
	else if (rankFreq[0] == 4 || rankFreq[4] == 4) cout << "Four of a Kind";
	else if ((rankFreq[0] == 2 && rankFreq[4] == 3) || (rankFreq[0] == 3 && rankFreq[4] == 2)) cout << "Full House";
	else if (suitFreq.size() == 1) cout << "Flush";
	else if (rankOrder) cout << "Straight";
	else if (rankFreq[2] == 3) cout << "Three of a Kind";
	else if (rankFreq[1] == 2 && rankFreq[3] == 2) cout << "Two Pairs";
	else if (pairsCount == 2) cout << "One Pair";
	else cout << "High Card";
	return 0;
}