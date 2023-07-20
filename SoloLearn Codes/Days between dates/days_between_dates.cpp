#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <sstream>
#include <vector>
#include <ctime>
#include <iterator>
#include <map>
using namespace std;

typedef struct {
    int year, mon, mday;
} YMD;

YMD createYMD(string dt) {
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

    YMD ymd;
    string tmp;
    vector<string> v, vv;

    stringstream ss(dt);
    while (getline(ss, tmp, ',')) v.push_back(tmp);

    stringstream sss(v[0]);
    while (getline(sss, tmp, ' ')) vv.push_back(tmp);

    ymd.year = atoi(v[1].c_str());
    ymd.mon = months.find(vv[0])->second;
    ymd.mday = atoi(vv[1].c_str());

    return ymd;
};

void TM(YMD ymd, struct tm* tm) {
    tm->tm_year = ymd.year - 1900;
    tm->tm_mon = ymd.mon;
    tm->tm_mday = ymd.mday;
    tm->tm_hour = 0;
    tm->tm_min = 0;
    tm->tm_sec = 0;
    tm->tm_isdst = -1;;
}

int main() {

    string dt1, dt2;

    getline(cin, dt1);
    getline(cin, dt2);

    struct tm tm1, tm2;
    TM(createYMD(dt1), &tm1);
    TM(createYMD(dt2), &tm2);
    time_t tt1 = mktime(&tm1);
    time_t tt2 = mktime(&tm2);
    cout << difftime(tt2, tt1) / (60 * 60 * 24);

    return 0;
}