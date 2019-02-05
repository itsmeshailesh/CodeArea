#include<stdio.h>
#define MAX 100
int main()
{
    int arr[MAX],i,j,temp,n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("Enter the array elements : ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Arranged array : ");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}
