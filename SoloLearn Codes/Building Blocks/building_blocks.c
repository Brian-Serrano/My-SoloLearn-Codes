#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int line;
    int t = 0;
    for(int i = 0; i < 4; i++) {
        scanf("%d", &line);
        t += line % 15;
    }
    printf("%d", t);

    return 0;
}