#include <stdio.h>

int main() {
    
    int x;
    scanf("%d", &x);
    int s = 0;
    for (int i = 0; i < x; i++)
        if (i % 3 == 0 || i % 5 == 0) s += i;
    printf("%d", s);

    return 0;
}