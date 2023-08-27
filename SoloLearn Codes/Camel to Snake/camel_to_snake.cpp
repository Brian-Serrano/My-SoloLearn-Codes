#include <iostream>
#include <string>
using namespace std;

int main() {

    string s;
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == toupper(s[i]) && i != 0) cout << "_";
        cout << (char) tolower(s[i]);
    }

    return 0;
}