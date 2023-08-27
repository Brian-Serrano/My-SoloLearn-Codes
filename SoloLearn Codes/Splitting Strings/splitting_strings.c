#include <stdio.h>
#include <string.h>

int main() {
	char s[50];
	fgets(s, 50, stdin);
	int n;
    scanf("%d", &n);
    for (int i = 0; i < strlen(s) - 1; i++) {
		if (i != 0 && i % n == 0) printf("-");
        printf("%c", s[i]);
	}
    return 0;
}