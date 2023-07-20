#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    if (x < 1) cout << "shh";
    else if (x > 10) cout << "High Five";
    else for (int i = 0; i < x; i++) cout << "Ra!";
    return 0;
}