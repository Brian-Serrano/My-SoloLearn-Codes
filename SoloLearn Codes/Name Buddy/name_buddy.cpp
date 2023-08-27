#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {

    string gm, n, tmp, p = "No such luck";

    getline(cin, gm);
    getline(cin, n);

    stringstream ss(gm);

    while (getline(ss, tmp, ' ')) {
        if (tmp[0] == n[0]) {
            p = "Compare notes";
            break;
        }
    }

    cout << p << endl;

    return 0;
}