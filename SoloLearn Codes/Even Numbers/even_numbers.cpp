#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string a;
    getline(cin, a);
    stringstream ss(a);
    while (getline(ss, a, ' ')) {
        int x = stoi(a);
        if (x % 2 == 0) cout << x << " ";
    }
    return 0;
}