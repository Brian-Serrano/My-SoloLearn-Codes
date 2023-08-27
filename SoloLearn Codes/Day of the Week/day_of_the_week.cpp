#include <iostream>
#include <string>
#include <vector>
#include <ctime>
using namespace std;

int main() {
    vector<string> wday = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };

    string s;
    getline(cin, s);
    struct tm time_str;
    strptime(s.c_str(), (isdigit(s[0])) ? "%m/%d/%Y" : "%B %d, %Y", &time_str);
    mktime(&time_str);
    cout << wday.at(time_str.tm_wday);
    return 0;
}