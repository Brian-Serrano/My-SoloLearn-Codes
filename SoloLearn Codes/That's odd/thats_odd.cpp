#include <iostream>
using namespace std;

int main() {
    int n, x, s = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x % 2 == 0) s += x;
    }
    cout << s;
    return 0;
}