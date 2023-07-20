#include <iostream>
#include <string>
using namespace std;

int main() {

    string s;
    getline(cin, s);

    int n;
    cin >> n;

    for (size_t i = 0; i < s.length(); i++) {
        if (i != 0 && i % n == 0) cout << "-";
        cout << s[i];
    }

    return 0;
}