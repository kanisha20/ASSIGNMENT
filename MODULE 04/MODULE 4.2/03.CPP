#include<iostream>
using namespace std;
inline int multiply(int a,int b)
{
    return a*b;
}
inline int cube(int a)
{
    return a*a*a;
}
int main()
{
    cout<<"Multiplication = "<<multiply(5,4)<<endl;
    cout<<"Cube = "<<cube(3)<<endl;
}