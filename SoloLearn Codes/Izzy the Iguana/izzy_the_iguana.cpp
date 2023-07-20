#include <iostream>
#include <map>
#include <string>
#include <sstream>
#include <vector>
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

    vector<string> v;
    stringstream ss(str);

    while (getline(ss, str, ' ')) {
        v.push_back(str);
    }

    int p = 0;
    for (string i : v) if (map.find(i) != map.end()) p += map[i];
    cout << ((p >= 10) ? "Come on Down!" : "Time to wait");

    return 0;
}