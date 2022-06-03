#include <stdio.h>
#include<math.h>
int prime(int n)
{
    int flag =0;
    int i;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i == 0)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        printf("Number is prime \n");
    else
        printf("Number is not prime \n");
}
int main()
{
    int num;
    printf("Enter a number to check whether it is prime or not \n");
    scanf("%d",&num);
    prime(num);
}