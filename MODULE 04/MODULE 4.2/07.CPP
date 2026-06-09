#include<iostream>
using namespace std;
class Student
{
public:
    int rollNo;
    void getRoll()
    {
        cout<<"Enter Roll Number: ";
        cin>>rollNo;
    }
};
class Test : public Student
{
public:
    int m1,m2;
    void getMarks()
    {
        cout<<"Enter Marks 1: ";
        cin>>m1;
        cout<<"Enter Marks 2: ";
        cin>>m2;
    }
};
class Result : public Test
{
public:
    int total;
    void calculate()
    {
        total = m1 + m2;
    }
    void display()
    {
        cout<<"Roll Number : "<<rollNo<<endl;
        cout<<"Total Marks : "<<total<<endl;
    }
};
int main()
{
    Result r;
    r.getRoll();
    r.getMarks();
    r.calculate();
    r.display();
}