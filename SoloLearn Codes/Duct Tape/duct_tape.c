#include <stdio.h>
#include <math.h>

int main() {
    int h, w;
	scanf("%d%d", &h, &w);
    printf("%.0f", ceil((h * w * 2) * 12 / (float) 120));

    return 0;
}