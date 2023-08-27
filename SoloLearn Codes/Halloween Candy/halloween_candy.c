#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int houses;
	scanf("%d", &houses);
	printf("%d", (int) ceil(200.0 / houses));
	return 0;
}