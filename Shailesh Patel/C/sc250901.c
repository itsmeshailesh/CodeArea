#include<stdio.h>
int main()
{
    int choice,i,n,f;
    while(1)
    {
        printf("\t\tMENU\n");
        printf("\t1. Factorial of a Number\n");
        printf("\t2. Prime or Not\n");
        printf("\t3. Odd or Even\n");
        printf("\t4. Exit\n");
        printf("\tEnter your Choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 :
                        f=1;
                        printf("\tEnter Number : ");
                        scanf("%d",&n);
                        for(i=1;i<=n;i++)
                            f=f*i;
                        printf("\tFactorial of %d = %d\n\n",n,f);
                        break;
            case 2 :
                        printf("\tEnter Number : ");
                        scanf("%d",&n);
                        for(i=2;i<n;i++)
                            {
                                if(n%i==0)
                                break;
                            }
                            if(i==n)
                            printf("\tNumber is Prime\n\n");
                            else
                                printf("\tNumber is Not Prime\n\n");
                        break;
            case 3 :
                        printf("\tEnter Number : ");
                        scanf("%d",&n);
                        if(n%2==0)
                            printf("\tEven\n");
                        else
                            printf("\tOdd\n");
                        break;
            case 4 :
                        exit(0);
            default :
                        printf("Invalid Option!!!\n\n");
        }
    }
    return 0;
}
