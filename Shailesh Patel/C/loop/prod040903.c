#include<stdio.h>
int main()
{
    int prod=1,n,n1,a;
    printf("Enter a number : ");
    scanf("%d",&n);
    n1=n;
    while(n1>0)
    {
        a=n1%10;
        prod=prod*a;
        n1=n1/10;
    }
    printf("The product of digits of number %d is %d",n,prod);
    return 0;
}

