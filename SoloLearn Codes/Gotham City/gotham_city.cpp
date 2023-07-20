#include <iostream>
using namespace std;

int main() {
    int c;
    cin >> c;
    if (c < 5) cout << "I got this!";
    else if (c >= 5 && c <= 10) cout << "Help me Batman";
    else cout << "Good Luck out there!";
    return 0;
}