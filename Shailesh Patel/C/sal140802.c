#include<stdio.h>
/*
Basic =3000
HRA=20%
DA=110%
Conveyance=Rs.500
Bonus=Rs.500
*/
int main()
{
    float sales,gross,inc,b,hra,da,con,bon;
    printf("Enter the Sale amount: ");
    scanf("%f",&sales);
    if(sales<=100000)
        {
            inc=0.05*sales;
            bon=200;
        }
    else
        {
            inc=0.10*sales;
            bon=500;
        }
    b=3000;
    hra=0.2*b;
    da=1.1*b;
    con=500;
    gross=b+hra+inc+da+con+bon;
     printf("Gross Salary : %f",gross);
    return 0;
}
