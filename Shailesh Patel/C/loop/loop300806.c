//WAP to print sum of all natural numbers from 1 to n
#include<stdio.h>
int main()
{
    int i=1,n,sum=0;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i++;
    }
    printf("Sum of numbers : %d",sum);
    return 0;
}


