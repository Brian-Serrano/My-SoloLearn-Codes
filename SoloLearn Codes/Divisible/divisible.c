#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    char a[50];

    scanf("%d %[^\n]*c", &n, a);

    char *token = strtok(a, " ");  
    while (token != NULL) {
        if (n % atoi(token) != 0) {
            puts("not divisible by all");
            return 0;
        }
        token = strtok(NULL, " ");
    } 

    puts("divisible by all");
    return 0;
}