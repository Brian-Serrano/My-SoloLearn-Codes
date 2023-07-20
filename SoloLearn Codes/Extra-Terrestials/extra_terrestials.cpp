#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cin >> str;
    cout << string(str.rbegin(), str.rend()) << endl;
    return 0;
}