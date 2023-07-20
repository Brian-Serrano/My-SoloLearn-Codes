#include <iostream>
#include <map>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    map<string, int> map = {
        {"Nachos", 6},
        {"Pizza", 6},
        {"Cheeseburger", 10},
        {"Water", 4},
        {"Coke", 5}
    };

    string str;
    getline(cin, str);

    vector<string> v;
    stringstream ss(str);

    while (getline(ss, str, ' ')) {
        v.push_back(str);
    }

    double cost = 0;
    for (string i : v) {
        if (map.find(i) != map.end()) {
            cost += map[i];
        }
        else {
            cost += map["Coke"];
        }
    }
    cout << cost + cost * .07 << endl;

    return 0;
}