#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character/digit : ");
    scanf("%c",&ch);
    if(ch>=48&&ch<=57)
        printf("Digit");
    else  if(ch>=65&&ch<=90)
             printf("UpperCase Character");
    else  if(ch>=97&&ch<=122)
             printf("LowerCase Character");
    else
        printf("Special Symbol");
    return 0;
}
