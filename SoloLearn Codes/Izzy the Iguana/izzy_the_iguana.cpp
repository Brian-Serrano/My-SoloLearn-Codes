#include <iostream>
#include <map>
#include <string>
#include <sstream>
using namespace std;

int main() {
    map<string, int> map = {
        {"Mango", 9},
        {"Carrot", 4},
        {"Lettuce", 5},
        {"Cheeseburger", 0}
    };

    string str;
    getline(cin, str);
    stringstream ss(str);
    int p = 0;
    while (getline(ss, str, ' ')) {
        if (map.find(str) != map.end()) p += map[str];
    }
    cout << ((p >= 10) ? "Come on Down!" : "Time to wait");

    return 0;
}