#include <iostream>
#include <regex>
#include <string>
using namespace std;

int main() {
    string inp;
    cin >> inp;
    cout << ((regex_match(inp, regex("((?=.*[!@#$%&*])(?=.*[0-9]).{7,})"))) ? "Strong" : "Weak");
    return 0;
}