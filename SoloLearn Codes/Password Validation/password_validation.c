#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[128], *sp = "!@#$%&*";
    fgets(str, 128, stdin);
    int n = 0, s = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (isdigit(str[i])) n++; 
        if (strchr(sp, str[i]) != NULL) s++;   
    }
    printf((strlen(str) >= 7 && n >= 2 && s >= 2) ? "Strong" : "Weak");   
    return 0;
}