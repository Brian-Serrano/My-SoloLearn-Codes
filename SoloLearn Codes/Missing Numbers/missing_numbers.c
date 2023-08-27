#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return *((int*)a) - *((int*)b);
}

int exst(const int *a, int size, int value) {
    for(int i = 0; i < size; i++) if(a[i] == value) return 0;
    return 1;
}

int main() {
    int n, x;
    scanf ("%d", &n);
    int lst[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        lst[i] = x;
    }    
    qsort(lst, n, sizeof(int), cmp);
    for (int x = lst[0]; x < lst[n - 1]; x++) {
        if (exst(lst, n, x)) printf("%d ", x);
    }
    return 0;
}