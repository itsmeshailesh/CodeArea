#include<stdio.h>
int main()
{
    int num,z=0,p=0,n=0;
    char ans='y';
    while(ans=='y'||ans=='Y')
    {
        printf("Enter Value : ");
        scanf("%d",&num);
        if(num>0)
            p++;
        if(num==0)
            z++;
        if(num<0)
            n++;
        printf("Do you want more inputs : ");
        scanf(" %c",&ans);

    }
    printf("\nPositive Numbers : %d",p);
    printf("\nNegative Numbers : %d",n);
    printf("\nZEROS            : %d",z);
    return 0;
}
