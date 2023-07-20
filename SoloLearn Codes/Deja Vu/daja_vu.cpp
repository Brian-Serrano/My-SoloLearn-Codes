#include <iostream>
#include <string>
#include <cstring>
#include <unordered_set>     
using namespace std;

int main() {
    string s;
    getline(cin, s);
    unordered_set<char> x;
    for (int i = 0; s[i] != '\0'; i++) x.insert(s[i]);
    cout << ((s.length() != x.size()) ? "Deja Vu" : "Unique");
    return 0;
}