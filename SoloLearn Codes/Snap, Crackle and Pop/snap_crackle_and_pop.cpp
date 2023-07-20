#include <iostream>
using namespace std;

int main() {

    int b;
    for (int i = 0; i < 6; i++) {
        cin >> b;
        cout << ((b % 3 == 0) ? "Pop " : ((b % 2 == 0) ? "Crackle " : "Snap "));
    }

    return 0;
}