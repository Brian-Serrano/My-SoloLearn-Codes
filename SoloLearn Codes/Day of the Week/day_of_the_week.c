#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main() {
    char wday[7][10] = {
        "Sunday", "Monday", "Tuesday", "Wednesday",
        "Thursday", "Friday", "Saturday"
    };
    char s[100];
    fgets(s, 100, stdin);
    struct tm time_str;
    strptime(s, (isdigit(s[0])) ? "%m/%d/%Y" : "%B %d, %Y", &time_str);
    mktime(&time_str);
    printf("%s", wday[time_str.tm_wday]);
    return 0;
}