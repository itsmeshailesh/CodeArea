//WAP to print power
#include<stdio.h>
int main()
{
    int i,a,b,p=1;
    printf("Enter the value of a and b : ");
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        p=p*a;
    }
    printf("Value of %d^%d : %d",a,b,p);
    return 0;
}



