#include<stdio.h>
int main()
{
    int ch,num1,num2;
    float ans;
    while(1)
    {
        printf("\nMENU\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 :    printf("Enter two numbers : ")
                        scanf("%d%d",&num1,&num2);
                        printf("Sum :  %d",num1+num2);
                        break;
            case 2 :    printf("Enter two numbers : ")
                        scanf("%d%d",&num1,&num2);
                        printf("Difference :  %d",num1-num2);
                        break;
            case 3 :    printf("Enter two numbers : ")
                        scanf("%d%d",&num1,&num2);
                        printf("Product :  %d",num1*num2);
                        break;
            case 4 :    printf("Enter two numbers : ")
                        scanf("%d%d",&num1,&num2);
                        printf("Sum :  %d",num1+num2);
                        break;

        }

    }
}
