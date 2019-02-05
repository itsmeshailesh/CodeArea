#include<stdio.h>

int add();
int main()
{
    int c;
    c=add();
    printf("Sum : %d",c);
    return 0;
}
int add()
{
    int a,b;
    printf("Addition of numbers");
    printf("\nEnter two numbers : ");
    scanf("%d%d",&a,&b);
    return a+b;

}
