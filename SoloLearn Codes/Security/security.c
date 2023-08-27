#include <stdio.h>
#include <string.h>

int main() {
    char s[50], f[50];
    int j = 0;
    fgets(s, 50, stdin);    
    for(int i = 0; i < strlen(s); i++) if (s[i] != 'x') f[j++] = s[i];
    printf((strstr(f, "$T") != NULL || strstr(f, "T$") != NULL) ? "ALARM" : "quiet");
    return 0;
}