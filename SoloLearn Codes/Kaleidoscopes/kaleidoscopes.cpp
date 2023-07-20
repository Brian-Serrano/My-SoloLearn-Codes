#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int k;
    cin >> k;
    int cost = k * 5;
    double tax = cost * .07;
    cout << ((k > 1) ? ceil((cost + tax - ((cost + tax) * .1)) * 100.0) / 100.0 : ceil((cost + tax) * 100.0) / 100.0);

    return 0;
}