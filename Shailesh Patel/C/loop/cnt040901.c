#include<stdio.h>
int main()
{
    int n,n1,count=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    n1=n;
    while(n1>0)
    {
        n1=n1/10;
        count++;
    }
    printf("The number %d has %d digits",n,count);
    return 0;
}
