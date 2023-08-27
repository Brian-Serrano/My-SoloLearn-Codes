#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	int n;
	char s[50];
	scanf("%d", &n);
    getchar();
	for (int i = 0; i < n; i++) {
		fgets(s, 50, stdin);
		char *token = strtok(s, " ");
		while (token != NULL) {
			printf("%c", token[0]);
			token = strtok(NULL, " ");
		}
		printf("%c", ' ');
	}
	return 0;
}