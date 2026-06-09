#include<iostream>
using namespace std;
class Area
{
public:
    void area(int l,int b)
    {
        cout<<"Rectangle Area = "<<l*b<<endl;
    }
    void area(float b,float h)
    {
        cout<<"Triangle Area = "<<0.5*b*h<<endl;
    }
    void area(double r)
    {
        cout<<"Circle Area = "<<3.14*r*r<<endl;
    }
};
int main()
{
    Area a;
    a.area(10,5);
    a.area(10.0f,5.0f);
    a.area(7.0);
}