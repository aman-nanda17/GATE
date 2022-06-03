#include<stdio.h>
int main()
{
    int largest,a[7],i,count;
    printf("Enter elements you want in array \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    largest = a[0];
    for(i=0;i<5;i++)
    {
        if(largest<a[i])
        {
            largest = a[i];
            count = i;
        }
    }
    printf("The largest number is found to be %d \n",largest);
    int secondlargest;
    if(count==0) secondlargest = a[1];
    else
        secondlargest = a[0];
    for(i=0;i<5;i++)
    {
        if(secondlargest<a[i])
        {
            if(i==count) continue;
            secondlargest = a[i];
        }
    }
    printf("The secondlargest number is found to be %d \n",secondlargest);

}