#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string a;
    getline(cin, a);
    stringstream ss(a);
    int max = 0, total = 0;
    while (getline(ss, a, ',')) {
        total += stoi(a);
        if (stof(a) > max) max = stof(a);
    }
    cout << int(((total - max) * 1.07) * 0.3);
    return 0;
}