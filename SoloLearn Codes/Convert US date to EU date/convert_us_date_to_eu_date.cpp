#include <iostream>
#include <string>
using namespace std;

int main() {
    string t;
    getline(cin, t);
    char dateStr[100];
    struct tm tm;
    strptime(t.c_str(), (isdigit(t[0])) ? "%M/%d/%Y" : "%B %d, %Y", &tm);
    strftime(dateStr, sizeof(dateStr), (isdigit(t[0])) ? "%-1d/%-1M/%Y" : "%-1d/%-1m/%Y", &tm);
    cout << dateStr;
    return 0;
}