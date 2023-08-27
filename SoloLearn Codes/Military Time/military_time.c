#define _XOPEN_SOURCE
#include <stdio.h>
#include <string.h>
#include <time.h>

int main() {
    struct tm tm = {0};
    char obuf[80], buf[80]; 
    fgets(buf, 80, stdin);
    strptime(buf, "%I:%M %p", &tm);    
    strptime(obuf, "%H:%M", &tm);  
    printf((tm.tm_hour > 9) ? "%d:" : "0%d:", tm.tm_hour);
    printf((tm.tm_min > 9) ? "%d" : "0%d", tm.tm_min);
    return 0;
}