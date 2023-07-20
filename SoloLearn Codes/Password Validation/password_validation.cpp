#include <iostream>
#include <cstring>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string str, symbolsPattern = "!@#$%&*", numbersPattern = "0123456789";
    getline(cin, str);
    size_t x = 0, y = 0;
    for (int i = 0; i < symbolsPattern.length(); i++)
        x += count(str.begin(), str.end(), symbolsPattern[i]);
    for (int i = 0; i < numbersPattern.length(); i++)
        y += count(str.begin(), str.end(), numbersPattern[i]);
    cout << ((x >= 2 && y >= 2 && str.length() >= 7) ? "Strong" : "Weak");
    return 0;
}