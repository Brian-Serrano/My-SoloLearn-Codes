#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int cmp(const void *a, const void *b) {
    return *((int*)b) - *((int*)a);
}

struct entry {
    char *k;
    int v;
};

struct entry dict[] = {
    {"2", 2},
    {"3", 3},
    {"4", 4},
    {"5", 5},
    {"6", 6},
    {"7", 7},
    {"8", 8},
    {"9", 9},
    {"10", 10},
    {"J", 11},
    {"Q", 12},
    {"K", 13},
    {"A", 14}
};

int get(char *key) {
    for (int i = 0; i < 13; i++) {
        if (strcmp(dict[i].k, key) == 0) return dict[i].v;
    }
    return -1;
}

int main() {
    char hand[30], suit[5], substr[5] = "";
    int idx, rank[5], freq[5] = {0}, rankOrder = 1, suitFreq = 1, isPair = 0;
    fgets(hand, 30, stdin);
    char *token = strtok(hand, " ");
    while (token != NULL) {
        for(int i = 0; i < strlen(token) - 1; i++) {
            substr[i] = token[i];
        }
        int r = get(substr);
        rank[idx] = r;
        suit[idx] = token[strlen(token) - 1];
        strcpy(substr, "");
        token = strtok(NULL, " ");
        idx++;
    }
    qsort(rank, 5, sizeof(int), cmp);
    for(int i = 0; i < 5; i++) {
        if (i > 0) {
            if (rank[i] + 1 != rank[i - 1]) rankOrder = 0;
            if (suit[i] != suit[i - 1]) suitFreq = 0;
        }
        for(int j = i + 1; j < 5; j++) {
            if(rank[i] == rank[j]) {
                isPair++;
                freq[i]++;
                freq[j]++;
            }
        }
    }
    if(suitFreq && rankOrder && rank[0] == 14) puts("Royal Flush");
    else if(suitFreq && rankOrder) puts("Straight Flush");
    else if(freq[0] == 3 || freq[4] == 3) puts("Four of a Kind");
    else if((freq[0] == 1 && freq[4] == 2) || (freq[0] == 2 && freq[4] == 1)) puts("Full House");
    else if(suitFreq) puts("Flush");
    else if(rankOrder) puts("Straight");
    else if(freq[2] == 2) puts("Three of a Kind");
    else if(freq[1] == 1 && freq[3] == 1) puts("Two Pairs");
    else if(isPair == 1) puts("One Pair");
    else puts("High Card");
    return 0;
}