#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main() {

    string dt1, dt2;

    getline(cin, dt1);
    getline(cin, dt2);

    struct tm tm1 = {0}, tm2 = {0};
    strptime(dt1.c_str(), "%B %d, %Y", &tm1);
    strptime(dt2.c_str(), "%B %d, %Y", &tm2);
    time_t tt1 = mktime(&tm1);
    time_t tt2 = mktime(&tm2);
    cout << difftime(tt2, tt1) / 86400;

    return 0;
}