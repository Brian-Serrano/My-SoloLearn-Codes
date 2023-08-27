#include <stdio.h>
#include <string.h>
 
int main() {
    char str[100];    
    fgets(str, 100, stdin);    
    char *token = strtok(str, " ");  
    while(token) {
        if(strcmp(token, "Grr") == 0) puts("Lion ");
        if(strcmp(token, "Rawr") == 0) puts("Tiger ");
        if(strcmp(token, "Ssss") == 0) puts("Snake ");
        if(strcmp(token, "Chirp") == 0) puts("Bird ");
        token = strtok(NULL, " ");
    }    
    return 0;
}