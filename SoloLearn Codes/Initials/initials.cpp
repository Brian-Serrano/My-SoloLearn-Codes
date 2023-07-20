#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string s;
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        getline(cin, s);
        stringstream ss(s);
        while (getline(ss, s, ' ')) cout << s[0];
        cout << " ";
    }
    return 0;
}