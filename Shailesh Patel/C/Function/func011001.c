#include<stdio.h>

void add();
int main()
{
    printf("Addition of numbers");
    add();
    return 0;
}
void add()
{
    int a,b,c;
    printf("\nEnter two numbers : ");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("Sum : %d",c);
}
