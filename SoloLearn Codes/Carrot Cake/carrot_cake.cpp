#include <iostream>
using namespace std;

int main() {
    int c, b;
    cin >> c >> b;
    if (c % b >= 7) cout << "Cake Time";
    else printf("I need to buy %d more", 7 - (c % b));

    return 0;
}