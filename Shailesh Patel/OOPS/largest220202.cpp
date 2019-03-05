/* WAP using switch case to find largest number among -
1. 2 numbers
2. 3 numbers
3. 4 numbers
*/
#include<iostream>
using namespace std;

class number
{
    int a;
    int b;
    int c;
    int d;
    int large;
public :
    void largest();
    void two();
    void three()
    {

        cout<<"Enter three numbers : ";
        cin>>a>>b>>c;
        if(a>b&&a>c)
            large=a;
        else
            if(b>a&&b>c)
            large=b;
        else
            if(c>a&&c>b)
            large=c;
        else
            {cout<<"Numbers are equal";large=a;}


    }
     void four()
    {

        cout<<"Enter four numbers : ";
        cin>>a>>b>>c>>d;
        if(a>b&&a>c&&a>d)
            large=a;
        else
            if(b>a&&b>c&&b>d)
            large=b;
        else
            if(c>a&&c>b&&c>d)
            large=c;
        else
            if(d>a&&d>b&&d>c)
            large=d;
        else
            {cout<<"Numbers are equal";large=a;}


    }
};
void number::largest()
 {
        cout<<"Largest num is : "<<large;
}
    void number::two()
    {
        cout<<"Enter two numbers : ";
        cin>>a>>b;
        if(a==b)
            {
                cout<<"Numbers are equal";
                large=a;
            }
        else
            large=a>b?a:b;
    }

int main()
{
    int ch;
    number a;
        while(1)
    {
        cout<<"\nMENU\n";
        cout<<"1. Two Numbers\n";
        cout<<"2. Three Numbers\n";
        cout<<"3. Four Numbers\n";
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
