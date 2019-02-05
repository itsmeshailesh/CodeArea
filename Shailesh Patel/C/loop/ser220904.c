#include<stdio.h>
int main()
{
    int i,j,k,f,p,terms;
    float sum=0.0;
    printf("Enter the number of terms : ");
    scanf("%d",&terms);
    for(i=1;i<=terms;i++)
    {
        f=1;
        p=1;
        for(j=1;j<=i;j++)
            {
                f=f*j;
            }
        p=i*i;
        if(i%2==0)
            sum=sum-(float)p/f;
        else
            sum=sum+(float)p/f;
    }
    printf("The sum of %d terms of series is %f",terms,sum);
    return 0;
}
