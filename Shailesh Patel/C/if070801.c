#include<stdio.h>

int main()
{
    int age;
    printf("Enter your age : ");
    scanf("%d",&age);
    if(age<0)
        printf("Pahle Paida to ho ja...");
    else
    if(age>=18)
    {
        printf("You Can Vote...\n");
    }
    else
    {
        printf("You Can not Vote!!!\n");
        printf("%d saal baad try kare!!",(18-age));
    }
    return 0;
}
