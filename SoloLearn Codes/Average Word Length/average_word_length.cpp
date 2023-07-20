#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    int w = 1, t = 0;
    for (size_t i = 0; i < s.length(); i++) {
        if (isspace(s[i])) w++;
        if (isblank(s[i]) || ispunct(s[i])) continue;
        else t++;
    }
    cout << ceil(t / (double)w);
    return 0;
}