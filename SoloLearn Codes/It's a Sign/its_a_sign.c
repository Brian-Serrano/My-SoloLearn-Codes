#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char s[30];
	for (int i = 0; i < 4; i++) {
		scanf("%s", s);
		int c = 0;
		for(int j = 0; j < strlen(s); j++) {
			if(s[j] == s[strlen(s) - 1 - j]) c++;
		}
		if (strlen(s) == c) {
			puts("Open");
			return 0;
		}
	}
	puts("Trash");
	return 0;
}