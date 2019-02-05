#include<stdio.h>
int main()
{
    int cp,sp,l,p;
    printf("Enter  the cost price : ");
    scanf("%d",&cp);
    printf("Enter  the selling price : ");
    scanf("%d",&sp);
    p=sp-cp;
    l=cp-sp;
    if(p>0)
    printf("You have a profit of %d",p);
    else if(l>0)
        printf("You have a loss of %d",l);
        else
             printf("No Profit. No Loss");


    return 0;
}
