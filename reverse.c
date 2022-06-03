#include <stdio.h>
int rev(int num)
{
    int rem,ulta = 0;
    while (num!=0)
    {
        rem = num%10;
        ulta  = ulta*10+rem;
        num = num/10;
    }
    return ulta;
}
int main()
{
    int n;
    printf("Enter a number \n");
    scanf("%d",&n);
    int revrse = rev(n);
    printf("The reverse of a number is %d",revrse);
    return 0;
}
