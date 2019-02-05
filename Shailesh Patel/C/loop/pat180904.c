
#include<stdio.h>
int main()
{
    int i,j,k,l,w,x,y,z,n;
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
     for(w=1;w<n;w++)
    {
        printf(" ");
        for(x=1;x<w;x++)
            printf(" ");
        for(y=w;y<n;y++)
            printf("*");
        for(z=w+1;z<n;z++)
            printf("*");
        printf("\n");
    }
    return  0;
}
