#include <stdio.h>
#include <string.h>

int main() {
    char b[200], i[100];
    fgets(b, 200, stdin);
    fgets(i, 100, stdin);
    int idx = 0;
    char *token = strtok(b, ",");
    while (token != NULL) {
        idx++;
        if (strcmp(token, i) == 0) break;
        token = strtok(NULL, ",");
    }
    printf("%d", idx * 5);
    return 0;
}