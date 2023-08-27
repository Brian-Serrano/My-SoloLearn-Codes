#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

	char s[100], f;
	fgets(s, 100, stdin);
	int idx = -1;
 
	char *token = strtok(s, " ");  
	while (token != NULL) {
		idx++;
		char cF = token[0];
		char cL = token[strlen(token) - 1];		
		if (idx > 0 && f != cF) {
			puts("false");
			return 0;
		}
		f = cL;
		token = strtok(NULL, " ");
	} 
	puts("true");
	return 0;
}