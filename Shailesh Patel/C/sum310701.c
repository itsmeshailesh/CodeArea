#include<stdio.h>

int main()
{
    int a,n,sum=0;
    printf("Enter a five digit number : ");
    scanf("%i",&n);
    a=n%10;
    n=n/10;
    sum=sum+a;
    a=n%10;
    n=n/10;
    sum=sum+a;
    a=n%10;
    n=n/10;
    sum=sum+a;
    a=n%10;
    n=n/10;
    sum=sum+a;
    a=n%10;
    n=n/10;
    sum=sum+a;
    printf("Sum of the numbers is : %i",sum);
    return 0;

}
