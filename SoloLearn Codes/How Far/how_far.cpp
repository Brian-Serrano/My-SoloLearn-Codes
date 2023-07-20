#include <iostream>
#include <string>

using namespace std;

int main() {

    string s;
    getline(cin, s);

    int h = s.find("H");
    int p = s.find("P");

    int f = (h > p) ? h - p : p - h;
    cout << f - 1;

    return 0;
}