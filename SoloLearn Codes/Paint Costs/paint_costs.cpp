#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int c;
    cin >> c;
    int p = c * 5;
    cout << int(ceil(40 + p + ((40 + p) * 0.10))) << endl;
    return 0;
}