#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    if (x < 1) printf("shh");
    else if (x > 10) printf("High Five");
    else for(int i = 0; i < x; i++) printf("%s", "Ra!");
    return 0;
}