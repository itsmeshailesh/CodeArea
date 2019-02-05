#include<stdio.h>

int main()
{
    float tsp,cost,pft;
    printf("Enter Total selling amount : ");
    scanf("%f",&tsp);
    printf("Enter Total Profit : ");
    scanf("%f",&pft);
    cost=tsp-pft;
    cost=cost/15;
    printf("Cost Per item : %f \n",cost);
    return 0;

}
