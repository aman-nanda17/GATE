#include <stdio.h>
#include<math.h>
int main()
{
    int n;
    int flag = 0;
    printf("Enter a number \n");
    scanf("%d",&n);
    for(int i =2;i<=sqrt(n);i++)
    {
        if(n%i == 0)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        printf("The number %d is not prime \n",n);
    }
    else
        printf("The number %d is prime \n",n);
}