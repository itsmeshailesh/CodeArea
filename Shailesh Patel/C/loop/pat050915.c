#include<stdio.h>
int main()
{
    int i,j,k,n,s;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(j=1;j<i;j++)
            printf("  ");
        for(k=n;k>=i;k--)
            printf("%d ",i);
        printf("\n");
    }
    return 0;
}


