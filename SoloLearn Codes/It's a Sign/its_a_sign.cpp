#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

    string s, ss, r = "Trash";
    for (int i = 0; i < 4; i++) {
        getline(cin, s);
        ss = s;
        reverse(ss.begin(), ss.end());
        if (s == ss) {
            r = "Open";
            break;
        }
    }
    cout << r;

    return 0;
}