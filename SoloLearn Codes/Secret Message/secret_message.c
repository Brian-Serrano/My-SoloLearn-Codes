#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char msg[100];
    fgets(msg, 100, stdin);
    for (int i = 0; i < strlen(msg); i++) {
        char c = tolower(msg[i]);
        if (c >= 'a' && c <= 'z') {
            printf("%c", (25 - (c - 'a')) + 'a');
        }
        else printf("%c", c);
    }
    return 0;
}