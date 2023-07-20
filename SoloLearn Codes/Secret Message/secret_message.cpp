#include <iostream>
#include <string>
#include <algorithm> 

using namespace std;

int main() {
    string a, r, m;
    for (int i = 97; i <= 122; i++) a += i;
    for (int i = 122; i >= 97; i--) r += i;
    getline(cin, m);
    for (auto& c : m) c = tolower(c);
    for (size_t i = 0; i < m.length(); i++) {
        int x = a.find(m[i]);
        cout << ((x >= 0) ? r[x] : m[i]);
    }
    return 0;
}