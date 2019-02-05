#include<stdio.h>
int main()
{
int rev=0,n,n1,a;
    printf("Enter a number : ");
    scanf("%d",&n);
    n1=n;
    while(n1>0)
    {
        a=n1%10;
        rev=rev*10+a;
        n1=n1/10;
    }
    if(n==rev)
    printf("The number %d is Palindrome ",n);
    else
        printf("The number %d is not Palindrome ",n);
    return 0;
}

