#include <iostream>
#include <map>
#include <string>
#include <sstream>
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
    stringstream ss(str);
    double cost = 0;
    while (getline(ss, str, ' ')) {
        if (map.find(str) != map.end()) {
            cost += map[str];
        }
        else {
            cost += map["Coke"];
        }
    }
    cout << cost + cost * .07 << endl;
    return 0;
}