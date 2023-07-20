#include <iostream>
#include <string>

using namespace std;

int main() {

    string s;
    int t = 0;
    while (getline(cin, s)) t += stoi(s) % 15;
    cout << t;

    return 0;
}