#include <iostream>
#include <string>
#include <cstring>
using namespace std;

bool isVowel(char c)
{
    string vowels = "aeiou";
    for (size_t i = 0; i < vowels.length(); i++) if (c == vowels[i]) return true;
    return false;
}

int main() {
    int c = 0;
    string s;
    getline(cin, s);

    for (char ch : s) if (isVowel(tolower(ch))) c++;
    cout << c;

    return 0;
}