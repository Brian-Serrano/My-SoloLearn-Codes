#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string msg;
    getline(cin, msg);
    stringstream ss(msg);
    while (getline(ss, msg, ' ')) {
        cout << msg.substr(1, msg.length()) << msg[0] << "ay ";
    }
    return 0;
}