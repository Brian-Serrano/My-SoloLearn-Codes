#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct point{
    int x, y;
} Point;

int main() {

    char s[100];
    fgets(s, 100, stdin);

    Point p[2];
    int pIdx = 0, i = -1;
    char *token = strtok(s, ",");
    while (token != NULL) {
        i++;
        for (size_t j = 0; j < strlen(token); j++) {
            if (token[j] == 'P') {
                p[pIdx].x = i;
                p[pIdx].y = j;
                pIdx++;
            }
        }
        token = strtok(NULL, ",");
    }
    printf("%d", abs(p[0].x - p[1].x) + abs(p[0].y - p[1].y));

    return 0;
}