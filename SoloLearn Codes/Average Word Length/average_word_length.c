#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main() {
    char s[100];
    fgets(s, 100, stdin);
    int w = 1, t = 0;
    for (size_t i = 0; i < strlen(s); i++) {
        if (isspace(s[i])) w++;
        if (!isblank(s[i]) && !ispunct(s[i])) t++;
    }
    printf ("%.0lf\n", ceil(t / (double)w));
    return 0;
}
