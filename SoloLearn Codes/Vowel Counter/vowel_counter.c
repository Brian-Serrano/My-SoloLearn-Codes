#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char vs[6] = "aeiou", s[100];
    int c = 0;
    fgets(s, 100, stdin);
    for (int i = 0; i < strlen(s); i++) {
        if (strchr(vs, tolower(s[i])) != NULL) c++;
    }
    printf("%d", c);
    return 0;
}