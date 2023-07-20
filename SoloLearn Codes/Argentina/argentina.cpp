#include <iostream>
using namespace std;

int main() {
    int p, d;
    cin >> p >> d;
    cout << ((50 * d >= p) ? "Pesos" : "Dollars") << endl;
    return 0;
}