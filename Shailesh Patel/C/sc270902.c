#include<stdio.h>
int main()
{
    int choice;
    printf("Enter the number of month : ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1 :
    case 3 :
    case 5 :
    case 7 :
    case 8 :
    case 10 :
    case 12 :   printf("There are 31 days in Month");
                break;
    case 4 :
    case 6 :
    case 9 :
    case 11 :   printf("There are 30 days in Month ");
                break;
    case 2 :    printf("There are 28 days in Month");
    default :   printf("Invalid Input!!!");
    }
    return 0;

}

