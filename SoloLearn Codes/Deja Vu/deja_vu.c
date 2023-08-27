#include <stdio.h>
#include <string.h>

int main() {
    char s[128];
    fgets(s, 128, stdin);
    for(int i = 0; i < strlen(s); i++) {
        for(int j = i + 1; j < strlen(s); j++) {
            if(s[i] == s[j]) {
                printf("Deja Vu");
                return 0;
            }
        }
    }
    printf("Unique");
    return 0;
}