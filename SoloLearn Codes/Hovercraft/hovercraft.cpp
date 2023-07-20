#include <iostream>
using namespace std;

int main() {
    int profit;
    cin >> profit;
    if (profit == 7) cout << "Broke Even";
    else if (profit < 7) cout << "Loss";
    else cout << "Profit";
    return 0;
}