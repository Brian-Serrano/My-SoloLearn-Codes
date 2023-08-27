#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main() {

    char s[200];
    fgets(s, 200, stdin);

    for(int i = 0; i < strlen(s); i++) {
        if(i != 0 && s[i] == toupper(s[i])) printf("_%c", tolower(s[i]));
        else printf("%c", tolower(s[i]));
    }

    return 0;
}