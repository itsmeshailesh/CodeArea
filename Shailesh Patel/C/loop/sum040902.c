#include<stdio.h>
int main()
{
    int sum=0,n,n1,a;
    printf("Enter a number : ");
    scanf("%d",&n);
    n1=n;
    while(n1>0)
    {
        a=n1%10;
        sum=sum+a;
        n1=n1/10;
    }
    printf("The sum of digits of number %d is %d",n,sum);
    return 0;
}
