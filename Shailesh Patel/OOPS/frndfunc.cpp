#include <iostream>
using namespace std;
class B;

class A{
private:
    int numA;
public:
    void getA(){
    numA = 12;
}
friend int Add(A,B);
};

class B{
int numB;
public:
     void getB(){
    numB = 51;
    }
    friend int Add(A,B);
};


int Add(A a , B b)
{
    return(a.numA + b.numB);
}

int main(){

A a;
B b;
b.getB();
cout<<"sum :"<<Add(a,b);
return 0;
}



