#include<stdio.h>

int main()
{
    long int men,women,ilm,ilw;
    men=80000*52/100;               //Given
    women=80000*48/100;             //Given
    ilm=men-(80000*35/100);         //Given
    ilw=women-(80000*13/100);       //Percentage of women = Total-Men=48-35=13
    printf("Number of illiterate Men : %ld \n",ilm);
    printf("Number of illiterate Women : %ld",ilw);
    return 0;
}
