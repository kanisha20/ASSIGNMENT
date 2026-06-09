#include<iostream>
using namespace std;
class Max
{
    int a,b;
public:
    void getData()
    {
        cout<<"Enter Two Numbers: ";
        cin>>a>>b;
    }
    friend void maximum(Max);
};
void maximum(Max m)
{
    if(m.a>m.b)
        cout<<"Maximum = "<<m.a;
    else
        cout<<"Maximum = "<<m.b;
}
int main()
{
    Max m;
    m.getData();
    maximum(m);
}