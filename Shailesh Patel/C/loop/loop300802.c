//WAP to print natural numbers in reverse from n to 1 using while loop
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("Numbers are : ");
    while(n>=1)
        {
            printf("\n%d",n--);
        }
    return 0;
}

