#include <stdio.h>
#include <string.h>

int main() {
   char name[81];
   int n;
   printf("Enter a line \n");
   scanf("%[^\n]",name);
   n = strlen(name);
    for (int i = 0; i <n; ++i) {
        printf("%c\n",name[i]);
    }
}
