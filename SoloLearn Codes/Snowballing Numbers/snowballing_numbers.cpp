#include <iostream>
#include <string>
using namespace std;

int main() {

    int n, x, s = 0;
    cin >> n;

    string r = "true";
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (i > 0 && x <= s) r = "false";
        s += x;
    }

    cout << r;

    return 0;
}