#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    fgets(s, 100, stdin);
    int h = (int)(strchr(s, 'H') - s);
    int p = (int)(strchr(s, 'P') - s);
    printf("%d", ((h > p) ? h - p : p - h) - 1);
    return 0;
}