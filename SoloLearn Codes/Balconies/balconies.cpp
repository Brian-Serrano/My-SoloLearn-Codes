#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int calculateArea(string str) {
    vector<string> v;
    stringstream ss(str);
    while (getline(ss, str, ',')) {
        v.push_back(str);
    }
    int t = 1;
    for (string i : v) {
        t *= stoi(i);
    }
    return t;
}

int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    cout << ((calculateArea(s1) > calculateArea(s2)) ? "Apartment A" : "Apartment B");
    return 0;
}