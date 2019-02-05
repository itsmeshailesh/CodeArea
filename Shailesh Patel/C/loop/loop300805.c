//WAP to print odd numbers between 1 and 100
#include<stdio.h>
int main()
{
    int i=1;
    printf("Even numbers are : ");
    while(i<=100)
    {
        if(i%2!=0)
        printf("\n%d",i);
        i++;
    }
    return 0;
}


