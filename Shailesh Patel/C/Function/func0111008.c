#include<stdio.h>
int power(int,int);
float fact(int);
int main()
{
    int terms,i=0;
    float sum=0.0;
    printf("Enter the terms : ");
    scanf("%d",&terms);
    while(i<=terms)
    {
        sum=sum+power(i,2)/fact(i);
        i++;
    }
    printf("Sum= %f",sum);
    return 0;
}
int power(int x,int y)
{
    int j,p=1;
    for(j=1;j<=y;j++)
        p=p*x;
    return p;
}

float fact(int z)
{
    int k,f=1;
    for(k=1;k<=z;k++)
        f=f*k;
    return (float)f;
}
