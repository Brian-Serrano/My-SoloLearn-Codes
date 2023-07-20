#include <iostream>
using namespace std;

int main() {
    string delimiter = " ", token;
    string msg;
    getline(cin, msg);
    size_t pos = 0;
    while ((pos = msg.find(delimiter)) != string::npos) {
        token = msg.substr(0, pos);
        cout << token.substr(1, token.length()) << token[0] << "ay" << delimiter;
        msg.erase(0, pos + delimiter.length());
    }
    cout << msg.substr(1, msg.length()) << msg[0] << "ay";
    return 0;
}