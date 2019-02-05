#include<stdio.h>

int evenodd(int x)
{
    if(x%2==0)
        return 1 ;
    else
        return 0;
}
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    if(evenodd(a))
        printf("%d is Even number",a);
    else
        printf("%d is Odd number",a);
    return 0;
}
