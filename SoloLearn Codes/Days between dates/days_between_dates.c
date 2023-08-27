#define __USE_XOPEN
#define _GNU_SOURCE
#include <stdio.h>
#include <string.h>
#include <time.h>

int main() {
    
    char dt1[100], dt2[100];

    fgets(dt1, 100, stdin);
    fgets(dt2, 100, stdin);

    struct tm tm1 = {0}, tm2 = {0};
    strptime(dt1, "%B %d, %Y", &tm1);
    strptime(dt2, "%B %d, %Y", &tm2);
    time_t tt1 = mktime(&tm1);
    time_t tt2 = mktime(&tm2);
    printf("%d", (int) difftime(tt2, tt1) / 86400);

    return 0;
}