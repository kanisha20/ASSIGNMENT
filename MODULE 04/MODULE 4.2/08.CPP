#include<iostream>
using namespace std;
class Math
{
public:
    int calculate(int a,int b)
    {
        return a+b;
    }
    float calculate(float a,float b)
    {
        return a-b;
    }
    double calculate(double a,double b,double c)
    {
        return a*b;
    }
};
int main()
{
    Math m;
    cout<<"Addition = "<<m.calculate(10,20)<<endl;
    cout<<"Subtraction = "<<m.calculate(20.5f,10.5f)<<endl;
    cout<<"Multiplication = "<<m.calculate(2.0,3.0,1.0)<<endl;
}