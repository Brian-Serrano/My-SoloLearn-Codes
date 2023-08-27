#include <stdio.h>
#include<stdlib.h>
#include <string.h>

int area(char *str) {
    int t = 1;
    char *token = strtok(str, ",");
    while (token != NULL) {
        t *= atoi(token);
        token = strtok(NULL, ",");
    }
    return t;
}

int main() {
    char s1[100], s2[100];
    fgets(s1, 100, stdin);
    fgets(s2, 100, stdin);
    printf((area(s1) > area(s2)) ? "Apartment A" : "Apartment B");
    return 0;
}