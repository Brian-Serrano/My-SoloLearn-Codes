#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getIndex(char *keys, char key, int size) {
    for (int i = 0; i < size; i++) {
        if (keys[i] == key) return i;
    }
    return -1;
}

void insert(char *keys, int *values, char key, int value, int *size) {
    int index = getIndex(keys, key, *size);
    if (index == -1) {
        keys[*size] = key;
        values[*size] = value;
        *size = *size + 1;
    }
    else values[index] = value;
}

int get(char *keys, int *values, char key, int size) {
    int index = getIndex(keys, key, size);
    if (index == -1) return -1;
    else return values[index];
}

int main() {
    int size = 0;
    char word[20], keys[200];
    int values[200];
    fgets(word, 20, stdin);
    long rank = 1, spc = 1;
    for(int i = strlen(word) - 1; i >= 0; i--) {
        char x = word[i];
        int xCount = getIndex(keys, x, size) != -1 ? get(keys, values, x, size) + 1 : 1;
        insert(keys, values, x, xCount, &size);
        for(int j = 0; j < size; j++) {
            if(keys[j] < x) rank += spc * values[j] / xCount;
        }
        spc *= strlen(word) - i;
        spc /= xCount;
    }
    printf("%ld", rank);
    return 0;
}