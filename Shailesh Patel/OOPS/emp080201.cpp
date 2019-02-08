#include<iostream>
#include<iomanip.h>

using namespace std;

class employee
{
    int emp_no;
    char name[20];
    float sal;

public :
    void read_data();
    void write_data();
};

void employee::read_data()
{
    cout<<"Enter Employee number, Employee Name and Salary : ";
    cin>>emp_no;
    fflush(stdin);
    cin.getline(name,20);
    cin>>sal;
}
void employee::write_data()
{
    cout<<setw(10)<<emp_no<<"  ";
    cout.setf(ios::left,ios::adjustfield);
    cout<<setw(20)<<name<<setw(10)<<sal<<endl;
}

int main()
{
    employee emp[3];
    int i;
    for(i=0;i<3;i++)
        emp[i].read_data();
    cout.setf(ios::right,ios::adjustfield);
    cout<<setw(10)<<"Emp No.  ";
    cout.setf(ios::left,ios::adjustfield);
    cout<<setw(20)<<"Emp Name"<<setw(10)<<"Emp Sal"<<endl;
    for(i=0;i<3;i++)
        emp[i].write_data();


}
