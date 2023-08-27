#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool isSub(char *sub, char (*lst)[10], int size) {
    for (int i = 0; i < size; i++) {
        if (strstr(lst[i], sub) == NULL) return false;
    }
    return true;
}

int main() {
    char s[100];
    fgets(s, 100, stdin); 
    char ws[100][10];
    int sz = 0;
    char *token = strtok(s, " ");  
    while (token != NULL) {
        strcpy(ws[sz], token);
        token = strtok(NULL, " ");
        sz++;
    } 
    char fw[100], subtext[100];
    strcpy(fw, ws[0]);
    char lcs[100] = {fw[0], '\0'};
   
    for (int i = 0; i < strlen(fw); i++) {
        for (int j = i + 2; j <= strlen(fw); j++) {
            strncpy(subtext, &fw[i], j);
            subtext[j] = '\0';
            if (isSub(subtext, ws, sz) && strlen(subtext) > strlen(lcs)) strcpy(lcs, subtext);
        }
    }
    puts(lcs);
    return 0;
}