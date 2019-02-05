#include<stdio.h>
int main()
{
    int i,j,k,n,s=1;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>i;j--)
            printf("  ");
        for(k=1;k<=i;k++)
            printf("%d ",s++);
        printf("\n");
    }
    return 0;
}


