#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    for (int i = s.length() - 1; i >= 0 ; i--) {
        if (isalpha(s[i]) || isspace(s[i])) cout << s[i];
    }
    return 0;
}