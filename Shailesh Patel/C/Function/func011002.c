#include<stdio.h>

void add(int,int);
int main()
{
    int a,b;
    printf("Addition of numbers");
    printf("\nEnter two numbers : ");
    scanf("%d%d",&a,&b);
    add(a,b);
    return 0;
}
void add(int a,int b)
{
    int c;
    c=a+b;
    printf("Sum : %d",c);
}
