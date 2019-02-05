//WAP to print sum of even numbers from 1 to n
#include<stdio.h>
int main()
{
    int i=1,n,sum=0;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2==0)
            sum=sum+i;
        i++;
    }
    printf("Sum of even numbers : %d",sum);
    return 0;
}


