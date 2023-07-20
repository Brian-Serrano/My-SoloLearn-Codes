#include <iostream>
using namespace std;

int main() {
    int t, u;
    cin >> t >> u;
    if (t / 12 >= u) cout << "Buy it!";
    else cout << "Try again";
    return 0;
}