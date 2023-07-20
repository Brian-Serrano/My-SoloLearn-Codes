#include <iostream>
#include <string>
using namespace std;

int main() {

    string s;
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        char ch = tolower(s[i]);
        if (s[i] == toupper(s[i]) && i != 0) cout << "_";
        cout << ch;
            
    }

    return 0;
}