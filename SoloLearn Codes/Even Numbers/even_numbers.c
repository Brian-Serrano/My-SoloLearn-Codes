#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char a[50];
    fgets(a, 50, stdin);

    char *token = strtok(a, " ");
    while (token != NULL) {
        int x = atoi(token);
        if (x % 2 == 0) printf("%d ", x);
        token = strtok(NULL, " ");
    }
    return 0;
}