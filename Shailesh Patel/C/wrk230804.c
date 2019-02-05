#include<stdio.h>
int main()
{
    float hrs;
    printf("Enter the hours : ");
    scanf("%f",&hrs);
    if(hrs>=2&&hrs<3)
        printf("The worker is efficient");
    if(hrs>=3&&hrs<4)
        printf("The worker needs to improve speed");
    if(hrs>=4&&hrs<5)
        printf("The worker should be given training to improve speed");
    if(hrs>=5)
        printf("The worker should leave the company");
    return 0;
}
