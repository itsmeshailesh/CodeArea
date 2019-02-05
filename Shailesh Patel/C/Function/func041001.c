#include<stdio.h>

int prime(int);
int main()
{
    int n;
    printf("Enter a number to check whether it is prime or not :");
    scanf("%d",&n);
    if(prime(n))
    {
        printf("Number is Prime");
    }
    else
        printf("Number is not Prime");
    return 0;
}
int prime(int x)
{
    int i;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
            break;
    }
    return x==i;
}
