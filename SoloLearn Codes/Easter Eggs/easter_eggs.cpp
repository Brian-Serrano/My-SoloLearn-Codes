#include <iostream>
using namespace std;

int main() {
    int a, y, f;
    cin >> a >> y >> f;
    cout << ((a == y + f) ? "Candy Time" : "Keep Hunting");

    return 0;
}