#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,count;
    printf("Enter a number ");
    scanf(%d,&n);
    for(i = 2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            count = 1;
        else
            count = 0;
    }
}