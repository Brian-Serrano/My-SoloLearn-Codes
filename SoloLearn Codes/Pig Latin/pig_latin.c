#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    fgets(str, 100, stdin);
    char* token = strtok(str, " ");
    while(token != NULL) {
        char f = *token++;
        printf("%s%cay ", token, f);
        token = strtok(NULL, " ");
    }
    return 0;
}