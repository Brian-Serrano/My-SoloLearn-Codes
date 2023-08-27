#include <stdio.h>
#include <ctype.h>

int main() {

    int d;
    printf("%c", '#');
    for (int i = 0; i < 3; i++) {
        scanf("%d", &d);
        printf("%x", d);
    }
    return 0;
}