#include<stdio.h>
int power(int,int);
int main()
{
    int a,b,c;
    printf("Enter the number :
           ");
    scanf("%d%d",&a,&b);
    c=power(a,b);
    printf("Answer - %d",c);
    return 0;
}
int power(int x, int y)
{
    int i,p=1;
    for(i=1;i<=y;i++)
        p=p*x;
    return p;
}
