#include <iostream>
#include <string>
using namespace std;

int main() {
    string t;
    getline(cin, t);
    char dtStr[100];
    struct tm tm;
    if (isdigit(t[0])) {
        strptime((t).c_str(), "%M/%d/%Y", &tm);
        strftime(dtStr, sizeof(dtStr), "%-1d/%-1M/%Y", &tm);
    }
    else {
        strptime((t).c_str(), "%B %d, %Y", &tm);
        strftime(dtStr, sizeof(dtStr), "%-1d/%-1m/%Y", &tm);
    }
    cout << dtStr << endl;
    return 0;
}