#include<iostream>
using namespace std;
class Swap
{
    int a,b;
public:
    void getData()
    {
        cout<<"Enter Two Numbers: ";
        cin>>a>>b;
    }
    friend void swapNum(Swap);
};
void swapNum(Swap s)
{
    s.a=s.a+s.b;
    s.b=s.a-s.b;
    s.a=s.a-s.b;
    cout<<"After Swapping:"<<endl;
    cout<<"A = "<<s.a<<endl;
    cout<<"B = "<<s.b<<endl;
}
int main()
{
    Swap s;
    s.getData();
    swapNum(s);
}