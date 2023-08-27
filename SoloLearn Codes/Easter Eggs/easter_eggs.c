#include <stdio.h>

int main() {

    int a, y, f;
    scanf("%d%d%d", &a, &y, &f);
    puts((a == y + f) ? "Candy Time" : "Keep Hunting");
    return 0;
}