#include <stdio.h>

int main() {
    int t, u;
    scanf("%d%d", &t, &u);
    printf((t / 12 >= u) ? "Buy it!" : "Try again");
    return 0;
}