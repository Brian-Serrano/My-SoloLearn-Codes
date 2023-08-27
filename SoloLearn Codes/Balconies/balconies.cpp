#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int area(string str) {
    int t = 1;
    stringstream ss(str);
    while (getline(ss, str, ',')) {
        t *= stoi(str);
    }
    return t;
}

int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    cout << ((area(s1) > area(s2)) ? "Apartment A" : "Apartment B");
    return 0;
}