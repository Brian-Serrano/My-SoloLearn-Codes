#include <stdio.h>
#include <string.h>

int main() {
    int arr[3501];
    char str[10000];
    for(int i = 0; i < 3501; i++) arr[i] = 2000;
    int x, carry = 0;
    for(int i = 3500; i > 0; i -= 14) {
        int sum = 0;
        for(int j = i; j > 0; j--) {
            sum = sum * j + 10000 * arr[j];
			arr[j] = sum % (j * 2 - 1);
			sum /= j * 2 - 1;
        }
        char buff[10];
		snprintf(buff, sizeof(buff), "%04d", carry + sum / 10000);
		strcat(str, buff);
		carry = sum % 10000;
    }
    scanf("%d", &x);
    printf("%c", str[x]);

    return 0;
}