#include<stdio.h>
int main()
{
    int a,b,c,sum,large;
    printf("Enter the three sides : ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c)
        large=a;
    if(b>c&&b>a)
        large=b;
    if(c>a&&c>b)
        large=c;
    sum=a+b+c-large;
    if(sum>large)
        printf("Triangle is Valid");
    else
        printf("Triangle is Invalid");
    return 0;
}
