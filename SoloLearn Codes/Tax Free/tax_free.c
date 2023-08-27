#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char a[100];
    fgets(a, 100, stdin);
    double t = 0;
    char *token = strtok(a, ",");
    while (token != NULL) {
        int x = atoi(token);
        t += (x < 20) ? x * 1.07 : x;
        token = strtok(NULL, ",");
    }
    printf("%.2lf ", t);
}