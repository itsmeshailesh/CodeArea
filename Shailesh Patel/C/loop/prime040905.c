#include<stdio.h>
int main()
{
int i=2,n;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(i<n)
    {
        if(n%i==0)
            break;
        else
            i++;
    }
    if(n==i)
        printf("The number %d is Prime ",n);
    else
        printf("The number %d is not Prime ",n);
    return 0;
}


