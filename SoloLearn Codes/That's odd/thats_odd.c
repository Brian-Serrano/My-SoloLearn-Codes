#include <stdio.h>

int main() {
    int n, x, s = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x % 2 == 0) s += x;
    }     
    printf("%d", s);
    return 0;
}