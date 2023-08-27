#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string arr[11] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten" };
    string s;
    getline(cin, s);
    stringstream ss(s);
    while (getline(ss, s, ' ')) {
        if (isdigit(s[0])) cout << arr[stoi(s)] << " ";
        else cout << s << " ";
    }
    return 0;
}