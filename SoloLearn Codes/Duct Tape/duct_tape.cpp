#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int h, w;
    cin >> h >> w;
    cout << ceil((h * w * 2) * 12 / (float)(60 * 2));

    return 0;
}