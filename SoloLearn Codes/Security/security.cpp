#include <iostream>
#include <string>
#include <cstring>     

using namespace std;

int main() {
    string str, ss;
    getline(cin, str);
    for (int i = 0; i < str.length(); i++) if (str[i] != 'x') ss += str[i];
    cout << ((ss.find("$T") != string::npos || ss.find("T$") != string::npos) ? "ALARM" : "quiet");
    return 0;
}