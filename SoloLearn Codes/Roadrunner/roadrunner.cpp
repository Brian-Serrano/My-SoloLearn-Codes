#include <iostream>
using namespace std;

int main() {
    int d, r, c;
    cin >> d >> r >> c;
    cout << ((d / r < (d + 50) / c) ? "Meep Meep" : "Yum");

    return 0;
}