#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[128];
    fgets(s, 128, stdin);
    for(int i = 0; i < strlen(s); i++) {
        for(int j = i + 1; j < strlen(s); j++) {
            if(tolower(s[i]) == tolower(s[j])) {
                printf("false");
                return 0;
            }
        }
    }
    printf("true");
    return 0;
}