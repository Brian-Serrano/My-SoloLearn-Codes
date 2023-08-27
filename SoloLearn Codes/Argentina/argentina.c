#include <stdio.h>

int main() {
    int p, d;
    scanf("%d", &p);
    scanf("%d", &d);
    printf((50 * d >= p) ? "Pesos" : "Dollars");
    return 0;
}
