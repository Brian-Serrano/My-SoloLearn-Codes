#include <stdio.h>
#include <string.h>

int main() 
{
    char n[30], o[300];
    int a, pos = 0;
    fgets(n, 30, stdin);
    scanf("%d", &a);
    getchar();
    fgets(o, 300, stdin);
    char *token = strtok(o, " ");
    while (token != NULL) {
        if(strcmp(token, n) < 0) pos++;
        token = strtok(NULL, " ");
    }
    printf("%d", 20 * (1 + pos / a));
}