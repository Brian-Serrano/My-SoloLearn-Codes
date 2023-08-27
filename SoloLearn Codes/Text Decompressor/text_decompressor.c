#include <stdio.h>
#include <string.h>

int main() {
    char s[100]; 
    fgets(s, 100, stdin);
    for (int i = 1; i < strlen(s); i += 2) { 
        int c = atoi(&s[i]);
        for (int j = 0; j < c; j++) printf("%c", s[i - 1]);
    }
    return 0;
}