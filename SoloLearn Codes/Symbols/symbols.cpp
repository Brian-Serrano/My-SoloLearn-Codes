#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    for (size_t i = 0; i < s.length(); i++) if (isalnum(s[i]) || isspace(s[i])) cout << s[i];
    return 0;
}