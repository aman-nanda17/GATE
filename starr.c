#include<stdio.h>
int main()
{
    int a = 5;
    int *p;
    int **ptr;
    p = &a;
    ptr = &p;
    printf("%u\n",p);
    printf("%u\n",&a);
    printf("%u\n",&p);
    printf("%u\n",ptr);
}