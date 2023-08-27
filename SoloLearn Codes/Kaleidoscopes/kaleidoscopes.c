#include <stdio.h>
#include <math.h>

int main() {
    int k;
    scanf("%d", &k);
    int cost = k * 5;
    double tax = cost * 0.07;
    printf("%.2f", ceil(((k > 1) ? (cost + tax - ((cost + tax) * 0.1)) : (cost + tax)) * 100.0) / 100.0);
    return 0;
}