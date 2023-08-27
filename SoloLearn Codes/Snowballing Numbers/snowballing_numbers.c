#include <stdio.h>
#include <string.h>

int main() {
    int n, x, s = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        if (i > 0 && x <= s) {
            puts("false");
            return 0;
        }
        s += x;
    }
    puts("true");
    return 0;
}