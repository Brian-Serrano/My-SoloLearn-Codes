#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <iterator>
#include <map>
#include <ctime>
using namespace std;

int main() {
    vector<string> wday = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
    map<string, int> months {
        { "January", 0 },
        { "February", 1 },
        { "March", 2 },
        { "April", 3 },
        { "May", 4 },
        { "June", 5 },
        { "July", 6 },
        { "August", 7 },
        { "September", 8 },
        { "October", 9 },
        { "November", 10 },
        { "December", 11 }
    };

    string s, tmp;
    getline(cin, s);

    stringstream ss(s);
    vector<string> p;

    struct tm time_str;
    time_str.tm_hour = 0;
    time_str.tm_min = 0;
    time_str.tm_sec = 0;
    time_str.tm_isdst = -1;

    if (isdigit(s[0]))
    {
        while (getline(ss, tmp, '/')) {
            p.push_back(tmp);
        }

        time_str.tm_year = atoi(p[2].c_str()) - 1900;
        time_str.tm_mon = atoi(p[0].c_str()) - 1;
        time_str.tm_mday = atoi(p[1].c_str());
    }
    else {
        while (getline(ss, tmp, ',')) {
            p.push_back(tmp);
        }

        stringstream sss(p[0]);
        vector<string> pp;

        while (getline(sss, tmp, ' ')) {
            pp.push_back(tmp);
        }

        time_str.tm_year = atoi(p[1].c_str()) - 1900;
        time_str.tm_mon = months.find(pp[0])->second;
        time_str.tm_mday = atoi(pp[1].c_str());
    }
    mktime(&time_str);
    cout << wday.at(time_str.tm_wday);

    return 0;
}