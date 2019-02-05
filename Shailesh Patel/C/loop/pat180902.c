
#include<stdio.h>
int main()
{
    int i,j,k,l,n,s;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=1;
        for(j=1;j<i;j++)
            printf(" ");
        for(k=i;k<=n;k++)
            printf("%d",s++);
        for(l=i;l<n;l++)
            printf("%d",s++);
        printf("\n");
    }
    return 0;
}




