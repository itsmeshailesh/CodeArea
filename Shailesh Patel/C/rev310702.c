#include<stdio.h>

int main()
{
    int a,n,rev=0;
    printf("Enter a five digit number : ");
    scanf("%i",&n);
    a=n%10;
    n=n/10;
    rev=rev+a*10000;
    a=n%10;
    n=n/10;
    rev=rev+a*1000;
    a=n%10;
    n=n/10;
    rev=rev+a*100;
    a=n%10;
    n=n/10;
    rev=rev+a*10;
    a=n%10;
    rev=rev+a;
    printf("Reverse of the numbers is : %i",rev);
    return 0;
}
