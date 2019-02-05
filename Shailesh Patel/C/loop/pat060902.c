/*
    1
   123
  12345
 1234567
123456789...
*/
#include<stdio.h>
int main()
{
    int i,j,k,l,n,s;
    printf("Enter  the number of rows : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=1;
        for(j=n;j>i;j--)
            printf(" ");
        for(k=1;k<=i;k++)
            printf("%d",s++);
        for(l=1;l<i;l++)
            printf("%d",s++);
        printf("\n");
    }
    return  0;
}

