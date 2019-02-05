#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter two numbers  : ");
    scanf("%d%d",&num1,&num2);
    switch(num1>num2)
    {
        case 1 :    printf("%d is greater than %d",num1,num2);
                    break;
        case 0 :    printf("%d is smaller than %d",num1,num2);
                    break;

    }

    return 0;

}



