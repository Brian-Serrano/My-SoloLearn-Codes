#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string inp;
    getline(cin, inp);
    for (size_t i = 0; i < inp.length(); i++) {
        char c = tolower(inp[i]);
        if (c >= 'a' && c <= 'z') {
            cout << (char)((25 - (c - 'a')) + 'a');
        }
        else cout << c;
    }
    return 0;
}