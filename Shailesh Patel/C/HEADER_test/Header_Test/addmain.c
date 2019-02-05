#include<stdio.h>
#include"add.h"
int main()
{
    int a,b,c;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    c=add(a,b);
    printf("Sum = %d",c);
    return 0;
}
