#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

	char str[30];
	fgets(str, 30, stdin);
	int x, r = 0;
	for(int i = strlen(str) - 1; i >= 0; i--) {
		int rev = strlen(str) - 1 - i;
		x = str[i] - 48;
		if(rev % 2 != 0) {
			r += x * 2;
			if (x * 2 > 9) r += -9;
		} else r += x;
	}

	puts((strlen(str) == 16 && r % 10 == 0) ? "valid" : "not valid");

	return 0;
}