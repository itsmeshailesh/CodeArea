#include<stdio.h>
int main()
{
    int arr[10],i,item,count=0,mid,high,low;
    printf("Enter the elements of array : ");
    for(i=0;i<10;i++)
        scanf("%d",&arr[i]);
    printf("\nElements of array : ");
    for(i=0;i<10;i++)
        printf("%d ",arr[i]);
    printf("\nEnter the value of element to search : ");
    scanf("%d",&item);
    low=0;
    high=9;
    mid=(low=high)/2;
    while(low<=high)
    {
        if(a)
    }

    }
    low=0;
    high=9;
    for(i=0;i<10;i++)
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
