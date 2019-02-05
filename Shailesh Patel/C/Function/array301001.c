#include<stdio.h>

void show(int a[][4],int r,int c)
{

    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
}
void display(int (*arr)[4],int r,int c)
{
    int *p,i,j;
    for(i=0;i<r;i++)
    {
        p=arr+i;
        for(j=0;j<c;j++)
        {
            printf("%d ",(*p+j));
        }
        printf("\n");

    }
}
void put(int *arr,int r,int c)
{
    int i,j;
     for(i=0;i<r;i++)
    {
         for(j=0;j<c;j++)
        printf("%d ",*(arr+i*c+j));
        printf("\n");
    }

}
int main()
{
    int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    show(a,3,4);
    printf("\n");
    display(a,3,4);
    printf("\n");
    put(a,3,4);
    return 0;
}
