#include<stdio.h>
int main()
{
int i=3,n1=0,n2=1,n3,n;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    printf("Fibonacci Series : \n%d\t%d",n1,n2);
    while(i<=n)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        printf("\t%d",n3);
        i++;
    }
    return 0;
}
