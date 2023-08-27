#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char arr[11][8] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten" };
    char s[128]; 
    fgets(s, 128, stdin);
    char *token = strtok(s, " ");
    while (token != NULL) {
        if (isdigit(token[0])) printf("%s ", arr[atoi(token)]);
        else printf("%s ", token);
        token = strtok(NULL, " ");
    }
    return 0;
}