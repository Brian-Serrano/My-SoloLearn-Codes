#include <stdio.h>

int main() {

    int c, b;
    scanf("%d%d", &c, &b);
    int k = c % b;
    printf((k >= 7) ? "Cake Time" : "I need to buy %d more", 7 - k);
    return 0;
}