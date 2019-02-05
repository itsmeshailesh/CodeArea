#include<stdio.h>
int main()
{
    int age;
    char gen,ms;
    printf("Enter Age,Marital status and Gender: ");
    scanf("%d %c %c",&age,&ms,&gen);
    if((ms=='M')||(ms=='m'))
        printf("Driver insured");
    else
    {
        if((gen=='M')||(gen=='m'))
            if(age>30)
                printf("Driver insured");
            else
                printf("Driver Rejected");
        else
            if(age>25)
                printf("Driver insured");
            else
                printf("Driver Rejected");

    }
    return 0;
}
