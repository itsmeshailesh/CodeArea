#include<stdio.h>
int main()
{
    int n,rev=0,a,num;
    printf("Enter the five digit number : ");
    scanf("%i",&num);
    n=num;
    a=n%10;
    n=n/10;
    rev=rev+a*10000;
    a=n%10;
    n=n/10;
    rev=rev+a*1000;
    a=n%10;
    n=n/10;
    rev=rev+a*100;
    a=n%10;
    n=n/10;
    rev=rev+a*10;
    a=n%10;
    rev=rev+a;
    printf("Reverse of the numbers is : %i\n",rev);
    if(num==rev)
    {
          printf("The number is palindrome");
    }
      else printf("The number is not palindrome");
    return 0;

}
