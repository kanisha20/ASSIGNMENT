#include<iostream>
using namespace std;
class Person
{
public:
    string name;
    int age;
    void getPerson()
    {
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Age: ";
        cin>>age;
    }
};
class Student : public Person
{
public:
    float percentage;
    void getStudent()
    {
        getPerson();
        cout<<"Enter Percentage: ";
        cin>>percentage;
    }
    void displayStudent()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Percentage : "<<percentage<<endl;
    }
};
class Teacher : public Person
{
public:
    float salary;
    void getTeacher()
    {
        getPerson();
        cout<<"Enter Salary: ";
        cin>>salary;
    }
    void displayTeacher()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Salary : "<<salary<<endl;
    }
};
int main()
{
    Student s;
    Teacher t;
    s.getStudent();
    s.displayStudent();
    t.getTeacher();
    t.displayTeacher();
}