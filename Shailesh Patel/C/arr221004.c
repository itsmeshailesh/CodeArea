#include<stdio.h>
int main()
{
    int arr[7],i,item,flag=0;
    printf("Enter the elements of array : ");
    for(i=0;i<7;i++)
        scanf("%d",&arr[i]);
    printf("\nElements of array : ");
    for(i=0;i<7;i++)
        printf("%d ",arr[i]);
    printf("\nEnter the value of element to search : ");
    scanf("%d",&item);
    for(i=0;i<7;i++)
    {
        if(arr[i]==item)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("Item found at position : %d",i+1);
    }
    else
        printf("Item not found!!!");
    return 0;
}
