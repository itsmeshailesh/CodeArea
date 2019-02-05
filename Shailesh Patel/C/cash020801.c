#include<stdio.h>

int main()
{
    int n,n10,n50,n100;
    printf("Enter amount : ");
    scanf("%i",&n);
    n100=n/100;
    n=n%100;
    n50=n/50;
    n=n%50;
    n10=n/10;
    printf("Num of 100 notes : %d \n",n100);
    printf("Num of 50 notes : %d \n",n50);
    printf("Num of 10 notes : %d \n",n10);
    return 0;

}
