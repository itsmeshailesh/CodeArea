//WAP to print factorial of n
#include<stdio.h>
int main()
{
    int i=1,n,fact=1;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
            fact=fact*i;
    }
    printf("Factorial of %d : %d",n,fact);
    return 0;
}



