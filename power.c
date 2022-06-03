#include <stdio.h>
int powe(int base,int expo)
{
    int p = 1;
    for(int i =1;i<=expo;i++)
    {
        p = p*base;
    }
    return p;
}
int main()
{
    int b,e;
    printf("Enter base and exponent for the calculation of power \n");
    scanf("%d%d",&b,&e);
    int power = powe(b,e);
    printf("The result obtained by using power function is %d",power);
}