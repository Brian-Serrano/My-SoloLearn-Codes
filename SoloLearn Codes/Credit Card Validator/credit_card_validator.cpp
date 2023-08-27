#include <iostream>
#include <string>
using namespace std;

int main() {

    string str;
    cin >> str;
    str = string(str.rbegin(), str.rend());

    int r = 0;
    for (int i = 0; i < str.length(); i++) {
        int x = str[i] - 48;
        if (i % 2 != 0) {
            r += x * 2;
            if (x * 2 > 9) r -= 9;
        }
        else r += x;
    }

    cout << ((str.length() == 16 && r % 10 == 0) ? "valid" : "not valid");

    return 0;
}