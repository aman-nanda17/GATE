#include<stdio.h>
int main()
{
    char *a[] = {"ravi","ravindra","ravindrababu"};
    printf("%s\n",*(a+1));
    printf("%c\n",*(*(a+2)+7));

}