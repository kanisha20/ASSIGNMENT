#include<iostream>
using namespace std;
class Matrix
{
    int a[3];
public:
    void getData()
    {
        for(int i=0;i<3;i++)
        cin>>a[i];
    }
    Matrix operator +(Matrix m)
    {
        Matrix temp;
       for(int i=0;i<3;i++)
            temp.a[i]=a[i]+m.a[i];

        return temp;
    }
    void display()
    {
        for(int i=0;i<3;i++)
            cout<<a[i]<<" ";
    }
};
int main()
{
    Matrix m1,m2,m3;
    cout<<"Enter First Matrix:\n";
    m1.getData();
    cout<<"Enter Second Matrix:\n";
    m2.getData();
    m3=m1+m2;
    cout<<"Result:\n";
    m3.display();
}