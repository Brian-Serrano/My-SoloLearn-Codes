#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main() {

    string gm, n, tmp;

    getline(cin, gm);
    getline(cin, n);

    stringstream ss(gm);
    vector<string> g;

    while (getline(ss, tmp, ' ')) {
        g.push_back(tmp);
    }

    string p = "No such luck";

    for (string m : g) {
        if (m[0] == n[0]) {
            p = "Compare notes";
            break;
        }
    }

    cout << p << endl;

    return 0;
}