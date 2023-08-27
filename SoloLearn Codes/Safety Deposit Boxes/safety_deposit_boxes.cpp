#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string s, fd;
    int idx = 1;
    getline(cin, s);
    getline(cin, fd);
    stringstream ss(s);
    while (getline(ss, s, ',')) {
        if (s.compare(fd) == 0) break;
        idx++;
    }
    cout << idx * 5;
    return 0;
}