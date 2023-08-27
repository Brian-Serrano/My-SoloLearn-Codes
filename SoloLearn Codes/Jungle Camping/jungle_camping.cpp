#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    stringstream ss(str);
    while (getline(ss, str, ' ')) {
        if (str == "Grr") {
            cout << "Lion" << " ";
        }
        if (str == "Rawr") {
            cout << "Tiger" << " ";
        }
        if (str == "Ssss") {
            cout << "Snake" << " ";
        }
        if (str == "Chirp") {
            cout << "Bird" << " ";
        }
    }
    return 0;
}