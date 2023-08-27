#include <stdio.h>
#include <math.h>

int main() {
    int x;
    scanf("%d", &x);
    int ones = 0;
    do {
        if(x & 1) ones++;
        x >>= 1;
    } while (x > 0);
    printf("%d", ones);
    return 0;
}