#include <regex.h>
#include <stdio.h>

int main() {
    char z[30];
    int res;
    regex_t re;
    fgets(z, 30, stdin);
    res = regcomp(&re, "^[]0-9[]{5}$", REG_EXTENDED);
    puts(((res = regexec(&re, z, 0, NULL, 0)) == 0) ? "true" : "false");
    return 0;   
}