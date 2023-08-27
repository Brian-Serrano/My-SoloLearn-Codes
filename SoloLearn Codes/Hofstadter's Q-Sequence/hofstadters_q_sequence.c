#include <stdio.h>

int q(int n, int *t) {
    if (n > 2) {
        if (t[n] == 0) t[n] = q(n - q(n - 1, t), t) + q(n - q(n - 2, t), t);
        return t[n];
    } else return 1;
}

int main() {
    int t[10000] = {0}, x;
    scanf("%d", &x);
    printf("%d", q(x, t));
    return 0;
}