#include<stdio.h>
int main()
{
    int arr[10],i,even=0,odd=0;
    printf("Enter the elements of array : ");
    for(i=0;i<10;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<10;i++)
        if(arr[i]%2==0)
            even++;
        else odd++;
    printf("The number of EVEN elements : %d\n",even);
    printf("The number of ODD elements : %d",odd);
        return 0;
}

