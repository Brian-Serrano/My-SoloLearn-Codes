#include <iostream>
#include <string>
#include <regex>
using namespace std;

int main() {
    string z;
    getline(cin, z);
    cout << ((regex_match(z, regex("^\\d{5}$"))) ? "true" : "false");
    return 0;
}