#include<stdio.h>

int add(int,int);
int main()
{
    int a,b,c;
    printf("Addition of numbers");
    printf("\nEnter two numbers : ");
    scanf("%d%d",&a,&b);
    c=add(a,b);
    printf("Sum : %d",c);
    return 0;
}
int add(int x,int y)
{
    return x+y;
}
