#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character : ");
    scanf(" %c",&ch);
    switch(ch)
    {
        case 'a' :
        case 'A' :
        case 'e' :
        case 'E' :
        case 'i' :
        case 'I' :
        case 'O' :
        case 'o' :
        case 'u' :
        case 'U' :
            printf("%c is a VOWEL",ch);
            break;
        default  :
            printf("%c is a CONSONANT",ch);
    }
    return 0;
}
