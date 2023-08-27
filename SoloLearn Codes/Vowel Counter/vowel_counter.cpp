#include <iostream>
#include <string>
using namespace std;

int main() {
    int c = 0;
    string s, vowels = "aeiou";
    getline(cin, s);

    for (char ch : s) if (vowels.find(tolower(ch)) != string::npos) c++;
    cout << c;

    return 0;
}