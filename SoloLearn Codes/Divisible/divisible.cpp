#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main() {

    string n, a, tmp;

    getline(cin, n);
    getline(cin, a);

    stringstream ss(a);
    vector<int> d;

    while (getline(ss, tmp, ' ')) {
        d.push_back(stoi(tmp));
    }

    for (int x : d) if ((stoi(n) % x) != 0) {
        cout << "not divisible by all";
        return 0;
    }

    cout << "divisible by all";
    return 0;
}