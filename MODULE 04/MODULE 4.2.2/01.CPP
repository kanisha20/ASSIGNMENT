#include<iostream>
using namespace std;
template <class T>
void swapValues(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
};
int main()
{
    int x = 10, y = 20;
    cout<<"Before Swapping:"<<endl;
    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;
    swapValues(x, y);
    cout<<"\nAfter Swapping:"<<endl;
    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;
}