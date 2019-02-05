/*
    *
   ***
  *****
 *******
*********...
*/
#include<stdio.h>
int main()
{
    int i,j,k,l,n;
    printf("Enter  the number of rows : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>i;j--)
            printf(" ");
        for(k=1;k<=i;k++)
            printf("*");
        for(l=1;l<i;l++)
            printf("*");
        printf("\n");
    }
    return  0;
}
