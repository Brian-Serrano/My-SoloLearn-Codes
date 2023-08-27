#define _GNU_SOURCE

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

double eval(char *expression) {
    char sy[50] = "echo $((  ";
    strcat(sy, expression);
    strcat(sy, " )) > x.cpp");
    system(sy);
    
    FILE *fp;
    char *line = NULL;
    size_t len = 0;

    fp = fopen("x.cpp", "r");
    getline(&line, &len, fp);

    return atof(line);
}

int main() {
    int n, i = 0;
    char s[50];
    scanf("%d", &n);
    getchar();
    fgets(s, 50, stdin);
    char *token = strtok(s, " ");
    while(token != NULL) {
        if (n == eval(token)) {
            printf("index %d", i);
            return 0; 
        }
        token = strtok(NULL, " ");
        i++;
    }
    puts("none");
    return 0;
}