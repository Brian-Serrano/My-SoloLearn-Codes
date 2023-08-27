#include <stdio.h>

int main() {
    int s, p;
    scanf("%d%d", &s, &p);
    printf((p % s == 0) ? "give away" : "eat them yourself");
    return 0;
}