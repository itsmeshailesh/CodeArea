#include<iostream>
#include<iomanip.h>

using namespace std;
class student
{
    int rno;
    char name[20];
    int marks[3],total;
    float per;

public :
    void get_data();
    void write_data();

};
void student::get_data()
{
    cout<<"Enter roll no : ";
    cin>>rno;
    cout<<"Enter name : ";
    fflush(stdin);
    cin.getline(name,20);
    cout<<"Enter marks of 3 subjects : ";
    cin>>marks[0]>>marks[1]>>marks[2];
}
void student::write_data()
{
    cout<<setw(10)<<rno;
    cout<<setw(20)<<name;
    total=marks[0]+marks[1]+marks[2];
    per=total/3.0;
    cout<<setw(10)<<total<<setw(10)<<per<<endl;
}
int main()
{
    student s[5];
    for(int i=0;i<5;i++)
        s[i].get_data();
    cout<<setiosflags(ios::left)<<setw(10)<<"R no"<<setw(20)<<"Name";
    cout<<setw(10)<<"Total"<<setw(10)<<"Per"<<endl;
    for(int j=0;j<5;j++)
    s[j].write_data();
    return 0;

}
