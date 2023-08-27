#include <stdio.h>

int main() {
    int d, r, c;
    scanf("%d%d%d", &d, &r, &c);
    puts((d / r < (d + 50) / c) ? "Meep Meep" : "Yum");
    return 0;
}