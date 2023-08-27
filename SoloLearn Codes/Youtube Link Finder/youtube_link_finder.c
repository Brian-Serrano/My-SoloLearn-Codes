#include <stdio.h>
#include<string.h>

int main() {
   char u[255];
   fgets (u, 255, stdin);
   char *ptr = strchr(u, '=');
   if (ptr != NULL) printf("%s \n", ptr + 1);
   else printf("%s \n", strrchr(u, '/') + 1);
   return 0;
}