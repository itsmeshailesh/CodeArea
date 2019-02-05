#include<stdio.h>
int main()
{
    int a,b,big;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    big=(a>b)?a:b;
    printf("Largest num : %d",big);
    return 0;
}
