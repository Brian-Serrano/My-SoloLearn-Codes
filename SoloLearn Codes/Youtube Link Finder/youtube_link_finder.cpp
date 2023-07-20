#include <iostream>
#include <string>
using namespace std;

int main() {
    string u;
    getline(cin, u);
    if (u.find('=') != string::npos) cout << u.substr(u.find('=') + 1) << endl;
    else cout << u.erase(0, u.find_last_of('/') + 1) << endl;
    return 0;
}