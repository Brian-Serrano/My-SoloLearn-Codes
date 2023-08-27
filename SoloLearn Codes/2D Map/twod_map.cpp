#include <iostream>
#include <string>
#include <vector>
#include <tuple>
using namespace std;

int main() {
    vector<tuple<int, int>> ps;
    string s;
    int i = -1;
    while (getline(cin, s, ',')) {
        i++;
        for (size_t j = 0; j < s.length(); j++) {
            if (s[j] == 'P') {
                ps.push_back(make_tuple(i, j));
            }
        }
    }
    cout << abs(get<0>(ps[0]) - get<0>(ps[1])) + abs(get<1>(ps[0]) - get<1>(ps[1]));
    return 0;
}