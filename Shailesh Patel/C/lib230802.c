#include<stdio.h>
int main()
{
    int d;
    printf("Enter the num of days : ");
    scanf("%d",&d);
    if(d>0&&d<=5)
        printf("Fine = %3.1f",0.5*d);
    if(d>5&&d<=10)
        printf("Fine = %3.1f",1.0*d);
    if(d>10&&d<=30)
        printf("Fine = %4.1f",5.0*d);
    if(d>30)
        printf("Membership Canceled");
    return 0;
}
