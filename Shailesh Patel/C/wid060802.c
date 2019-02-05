#include<stdio.h>

int main()
{
    int a;
    float b;
    printf("Width spacing \n");
    printf("Enter any integer : ");
    scanf("%i",&a);
    printf("You Entered :%10d",a);
    printf("\nEnter a floating point number : ",a);
    scanf("%7f",&b);
    printf("You Entered :%5.2f",b);
    return 0;
}
