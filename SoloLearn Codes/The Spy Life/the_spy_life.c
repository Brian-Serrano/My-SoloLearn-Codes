#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[128];
    fgets(s, 128, stdin);  
    for (int i = strlen(s) - 1; i >= 0; i--) {    
        if(isalpha(s[i]) || isspace(s[i])) printf("%c", s[i]);
    }
    return 0;
}