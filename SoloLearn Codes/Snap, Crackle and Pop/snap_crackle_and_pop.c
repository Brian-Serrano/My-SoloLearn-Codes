#include <stdio.h>

int main() {
    int b;
    for (int i = 0; i < 6; i++) {
        scanf("%d", &b);
        printf("%s ", (b % 3 == 0) ? "Pop" : (b % 2 == 0) ? "Crackle" : "Snap");
    }
    return 0;
}