#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main() {
    char t[100];
    fgets(t, 100, stdin);
    char dateStr[100];
    struct tm tm;
    strptime(t, (isdigit(t[0])) ? "%M/%d/%Y" : "%B %d, %Y", &tm);
    strftime(dateStr, sizeof(dateStr), (isdigit(t[0])) ? "%-1d/%-1M/%Y" : "%-1d/%-1m/%Y", &tm);
    printf("%s", dateStr);
    return 0;
}