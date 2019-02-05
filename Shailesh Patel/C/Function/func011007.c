#include<stdio.h>
int fact(int);
int main()
{
    int a,b;
    printf("Enter the number : ");
    scanf("%d",&a);
    b=fact(a);
    printf("FACTORIAL - %d",b);
    return 0;
}
int fact(int x)
{
    int i,f=1;
    for(i=1;i<=x;i++)
        f=f*i;
    return f;
}

