#include <iostream>
#include <string>
using namespace std;

int main() {
    string t;
    getline(cin, t);
    struct tm tm;
    char buf[255];
    strptime((t).c_str(), "%I:%M %p", &tm);
    strftime(buf, sizeof(buf), "%H:%M", &tm);
    puts(buf);
    return 0;
}