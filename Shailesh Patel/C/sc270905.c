#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number  : ");
    scanf("%d",&num);
    switch(num%2)
    {
        case 1 :    printf("%d is ODD",num);
                    break;
        case 0 :    printf("%d is EVEN",num);
                    break;

    }

    return 0;

}



