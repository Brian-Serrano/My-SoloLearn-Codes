#include <iostream>
#include <string>

using namespace std;

int main() {

    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++) if (isdigit(s[i])) cout << string(s[i] - '0', s[i - 1]);

    return 0;
}