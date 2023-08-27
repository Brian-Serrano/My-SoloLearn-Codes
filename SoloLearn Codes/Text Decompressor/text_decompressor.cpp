#include <iostream>
#include <string>

using namespace std;

int main() {

    string s;
    getline(cin, s);
    for (int i = 1; i < s.length(); i += 2) cout << string(s[i] - '0', s[i - 1]);

    return 0;
}