#include<stdio.h>
int main()
{
    int l,b,a,p;
    printf("Enter length and bredth : ");
    scanf("%d%d",&l,&b);
    a=l*b;
    p=2*(l+b);
    printf("Area : %d",a);
    printf("\nPerimeter : %d",p);
    if(a>p)
    printf("\nArea is greater than perimeter");
    else
        printf("Area is not greater than perimeter");
    return 0;
}
