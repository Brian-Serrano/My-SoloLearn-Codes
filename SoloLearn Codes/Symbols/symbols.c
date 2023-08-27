#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[128]; 
    fgets(s, 128, stdin);
    for(size_t i = 0; i < strlen(s); i++) if(isalpha(s[i]) || isdigit(s[i]) || isspace(s[i])) printf("%c", s[i]);
    return 0;
}