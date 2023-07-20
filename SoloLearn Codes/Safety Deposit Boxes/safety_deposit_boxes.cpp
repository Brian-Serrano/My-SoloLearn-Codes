#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string s, fd;
    getline(cin, s);
    getline(cin, fd);

    string separator = ",";
    int separatorIndex;
    vector<string> itms;

    while (s.find(separator) != string::npos) {
        separatorIndex = s.find(separator);
        itms.push_back(s.substr(0, separatorIndex));
        s = s.substr(separatorIndex + 1, s.length());
    }
    itms.push_back(s);

    long unsigned int i;
    for (i = 0; i < itms.size(); i++) if (itms.at(i) == fd) break;

    cout << (i + 1) * 5;

    return 0;
}