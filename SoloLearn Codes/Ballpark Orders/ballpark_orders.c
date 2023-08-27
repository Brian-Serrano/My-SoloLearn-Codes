#include <stdio.h>
#include <string.h>

struct entry {
    char *k;
    int v;
};

struct entry dict[] = {
    {"Nachos", 6},
    {"Pizza", 6},
    {"Cheeseburger", 10},
    {"Water", 4},
    {"Coke", 5}
};

int get(char *key) {
    for (int i = 0; i < 5; i++) {
        if (strcmp(dict[i].k, key) == 0) return dict[i].v;
    }
    return -1;
}

int main() {
    double cost = 0;
    char str[100];  
    fgets(str, 100, stdin);
    char *token = strtok(str, " ");
    while(token != NULL) {
        if (get(token) != -1) cost += get(token);
        else cost +=  get("Coke");  
        token = strtok(NULL, " ");
    }      
    printf("%.02lf", cost + cost * 0.07);
    return 0;
}