#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string items;
    getline(cin, items);
    stringstream ss(items);
    while (getline(ss, items, ' ')) {
        if (stof(items) * 1.1 > 20) {
            cout << "Back to the store";
            return 0;
        }
    }
    cout << "On to the terminal";
    return 0;
}