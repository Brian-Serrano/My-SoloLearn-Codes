#include <stdio.h>

int main() {
    int hover;
    scanf("%d", &hover);
    if (hover == 7) puts("Broke Even");
    else if (hover < 7) puts("Loss");
    else puts("Profit");
    return 0;
}