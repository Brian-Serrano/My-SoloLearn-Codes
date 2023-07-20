#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    int ones = 0;
    do {
        if (x & 1) ones++;
        x >>= 1;
    } while (x > 0);
    cout << ones;

    return 0;
}