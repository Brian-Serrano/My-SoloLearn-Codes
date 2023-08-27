#include <stdio.h>
#include <math.h>

int main() {
    int c;
    scanf("%d", &c);
    int p = c * 5;
    printf("%.f", ceil(40 + p + ((40 + p) * 0.1)));
    return 0;
}