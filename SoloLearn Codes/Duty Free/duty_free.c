#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char items[50];
    fgets(items, 50, stdin);
    char *token = strtok(items, " ");
    while (token != NULL) {
        if (atof(token) * 1.1 > 20) {
            puts("Back to the store");
            return 0;
        }
        token = strtok(NULL, " ");
    }

    puts("On to the terminal");
    return 0;
}