#include <stdio.h>
#include <string.h>

struct entry {
    char *k;
    int v;
};

struct entry dict[] = {
    {"Mango", 9},
    {"Carrot", 4},
    {"Lettuce", 5},
    {"Cheeseburger", 0}
};

int get(char *key) {
    for (int i = 0; i < 4; i++) {
        if (strcmp(dict[i].k, key) == 0) return dict[i].v;
    }
    return -1;
}

int main() {
    char str[200];
    fgets(str, 200, stdin);

    int p = 0;
    char *token = strtok(str, " ");
    while(token != NULL) {
        if (get(token) != -1) {
            p += get(token);
        }
        token = strtok(NULL, " ");
    }
    puts((p >= 10) ? "Come on Down!" : "Time to wait");
    return 0;
}