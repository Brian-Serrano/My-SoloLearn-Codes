#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string n, a, tmp;
    getline(cin, n);
    getline(cin, a);
    stringstream ss(a);
    while (getline(ss, tmp, ' ')) {
        if ((stoi(n) % stoi(tmp)) != 0) {
            cout << "not divisible by all";
            return 0;
        }
    }
    cout << "divisible by all";
    return 0;
}