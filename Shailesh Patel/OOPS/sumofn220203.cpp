/*Write a program to find sum of 1st 100 numbers by using -
1. while
2. do while
3. for loop
*/
/* WAP using switch case to find largest number among -
1. 2 numbers
2. 3 numbers
3. 4 numbers
*/
#include<iostream>
using namespace std;

class natural
{
    int sum;
public :
    void disp()
    {
        cout<<"\nSum= "<<sum;
    }
    void forloop()
    {
        for(int i=0,sum=0;i<=100;i++)
            sum=+i;
    }
    void whileloop()
    {
        int i=0;
        sum=0;
        while(i<=100)
            sum=sum+i++;

    }
     void doloop()
    {
        int i=0;sum=0;
        do
        {
            sum=sum+i++;
        }while(i<=100)
    }
};

int main()
{
    int ch;
    number a;
        while(1)
    {
        cout<<"\nMENU\n";
        cout<<"1.For\n";
        cout<<"2. While\n";
        cout<<"3. \Don";
        cout<<"4. Exit\n";
        cin>>ch;
        switch(ch)
        {
            case 1 :    a.two();
                        break;
            case 2 :    a.three();
                        break;
            case 3 :    a.four();
                        break;
            case 4 :    exit(0);

        }
        a.largest();
    }

        return 0;
}
