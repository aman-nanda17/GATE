#include<stdio.h>
int main(void)
{
    int a[100],n;
    printf("Enter how many elements you want in array\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i = 0;i<n;i++)
    {
        printf("%d",a[i]);
    }

}