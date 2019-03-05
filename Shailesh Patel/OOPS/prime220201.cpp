//Q1. WAP to find weather a number is prime or not
#include<iostream>
using namespace std;

class num
{
    int x;
public :

    void get()
    {
        cout<<"Enter a number : ";
        cin>>x;
    }
    void checkprime()
    {
        int flag=0;
        for(int i=2;i<=x/2;i++)
        {
            if(x%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<"Number is Prime";
        else
            cout<<"Number is not Prime";
    }
};

int main()
{
    num a;
    a.get();
    a.checkprime();
    return 0;

}
