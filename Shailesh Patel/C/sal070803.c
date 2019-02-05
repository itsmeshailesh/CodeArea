#include<stdio.h>

int main()
{
    float basic,da,hra,gs;
    printf("Enter Basic salary : ");
    scanf("%f",&basic);
    if(basic<1500)
    {
        da=basic*0.10;
        hra=basic*0.20;
    }
    else
    {
        da=basic*0.20;
        hra=basic*0.40;
    }
    gs=basic+da+hra;
    printf("\nGross salary : %f",gs);
    return 0;
}
