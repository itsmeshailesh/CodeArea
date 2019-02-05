#include<stdio.h>

int main()
{
    int n,sum=0;
    printf("Enter a four digit number : ");
    scanf("%i",&n);
    sum=(n%10)+(n/1000);
    printf("Sum of the First and Last numbers is : %i",sum);
    return 0;

}
