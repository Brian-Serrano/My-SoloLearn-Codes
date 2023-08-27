#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char a[100];
    fgets(a, 100, stdin);
    char *token = strtok(a, ",");
    int max = 0, total = 0;
    while (token != NULL) {
        total += atoi(token);
        if (atof(token) > max) max = atof(token);
        token = strtok(NULL, ",");
    }
    printf("%d", (int) (((total - max) * 1.07) * 0.3));
    return 0;
}