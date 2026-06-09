#include<iostream>
using namespace std;
class Math
{
public:
    Math(int a,int b)
    {
        cout<<"Addition = "<<a+b<<endl;
        cout<<"Subtraction = "<<a-b<<endl;
        cout<<"Multiplication = "<<a*b<<endl;
        cout<<"Division = "<<a/b<<endl;
    }
};
int main()
{
    Math m(20,10);
}