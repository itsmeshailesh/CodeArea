//WAP to print natural numbers from 1 to n using while loop
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    i=1;
    printf("Natural numbers are : ");
    while(i<=n)
        {
            printf("\n%d",i++);
        }
    return 0;
}
