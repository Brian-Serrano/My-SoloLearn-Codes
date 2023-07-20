#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main() {

    string s;
    getline(cin, s);

    vector<string> v;
    stringstream ss(s);

    while (getline(ss, s, ' ')) {
        v.push_back(s);
    }

    string r = "true";
    for (size_t i = 0; i < v.size() - 1; i++) {
        if(v[i][v[i].length() - 1] != v[i + 1][0]) r = "false";
    }

    cout << r;

    return 0;
}