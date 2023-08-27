#include <stdio.h>

int main() {
    float CMYK[4];
    for (int i = 0; i < 4; i++) {
        scanf("%f", &CMYK[i]);
    }
    for (int i = 0; i < 3; i++) {
        printf((i == 0) ? "%.f" : ",%.f", 255 * (1 - CMYK[i]) * (1 - CMYK[3]));
    }
 
    return 0;
}