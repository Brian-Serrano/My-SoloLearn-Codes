#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

bool replace(string& str, const string& from, const string& to) {
	size_t start_pos = str.find(from);
	if (start_pos == string::npos) return false;
	str.replace(start_pos, from.length(), to);
	return true;
}

void replaceAll(string& str, const string& from, const string& to) {
	if (from.empty()) return;
	size_t start_pos = 0;
	while ((start_pos = str.find(from, start_pos)) != string::npos) {
		str.replace(start_pos, from.length(), to);
		start_pos += to.length();
	}
}

int findStr(string& str, const string& ss) {
	size_t start_pos = str.find(ss);
	if (start_pos == string::npos) return 0;
	return 1;
}

int findStrCount(string& str, const string& ss) {
	if (ss.empty()) return 0;
	int l = 0;
	size_t start_pos = 0;
	while ((start_pos = str.find(ss, start_pos)) != string::npos) {
		l++;
		start_pos += 1;
	}
	return l;
}

bool findHV(vector<int> v, int k) {
	return find(v.begin(), v.end(), k) != v.end();
}

int main() {

	string s;
	getline(cin, s);

	string vs[] = { "02", "03", "04", "05", "06", "07", "08", "09", "10", "11", "12", "13", "14" };
	string c, hc = "JQKA";
	int lnVs = sizeof(vs) / sizeof(vs[0]);
	for (size_t i = 0; i < lnVs; i++) {
		if (i == 8) continue;
		if (i <= 7) replaceAll(s, to_string(stoi(vs[i])), vs[i]);
		else {
			c.assign(1, hc[i - 9]);
			replaceAll(s, c, vs[i]);
		}
	}

	vector<int> hV;
	for (string v : vs) {
		int nV = findStrCount(s, v);
		if (nV != 0) hV.push_back((int)(nV));
	}
	int ln = hV.size();

	string suits[] = { "H", "S", "C", "D" };
	bool suited = false;
	for (string su : suits) {
		int z = findStrCount(s, su);
		if (z == 5) {
			suited = true;
			break;
		}
	}

	for (string su : suits) replaceAll(s, su, "");
	vector<int> wosInts;
	stringstream ss(s);
	string tmp;
	while (getline(ss, tmp, ' ')) wosInts.push_back(stoi(tmp));

	int sm = accumulate(wosInts.begin(), wosInts.end(), 0);
	int mn = *min_element(wosInts.begin(), wosInts.end());
	int mx = *max_element(wosInts.begin(), wosInts.end());

	if (findHV(hV, 2) && ln == 4) puts("One Pair");
	else if (findHV(hV, 2) && ln == 3) puts("Two Pairs");
	else if (findHV(hV, 3) && ln == 3) puts("Three of a Kind");
	else if (findHV(hV, 3) && ln == 2) puts("Full House");
	else if (findHV(hV, 4) && ln == 2) puts("Four of a Kind");
	else if (suited && mx - mn == 4 && mx == 14 && ln == 5) puts("Royal Flush");
	else if (suited && mx - mn == 4 && ln == 5) puts("Straight Flush");
	else if (suited && mx - mn == 12 && mx == 14 && sm == 28 && ln == 5) puts("Straight Flush");
	else if (mx - mn == 12 && mx == 14 && sm == 28 && ln == 5) puts("Straight");
	else if (mx - mn == 4 && ln == 5) puts("Straight");
	else if (suited) puts("Flush");
	else if (!findHV(hV, 2) && !findHV(hV, 3) && !findHV(hV, 4) && mx - mn != 4) puts("High Card");

	return 0;
}