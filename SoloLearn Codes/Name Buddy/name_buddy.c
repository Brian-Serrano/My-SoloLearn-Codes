#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char g[100], n[100];
    fgets(g, 100, stdin);
    fgets(n, 100, stdin);
    int p = 0;
    char *token = strtok(g, " ");
    while (token != NULL) {
        if (token[0] == n[0]) {
            puts("Compare notes");
            return 0;
        }
        token = strtok(NULL, " ");
    }
    puts("No such luck");
    return 0;
}