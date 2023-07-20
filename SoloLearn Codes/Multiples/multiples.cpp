#include <iostream>
using namespace std;

int main() {

    int x;
    cin >> x;
    int s = 0;
    for (int i = 0; i < x; i++)
        if ((i % 3 == 0) || (i % 5 == 0)) s += i;
    cout << s;

    return 0;
}