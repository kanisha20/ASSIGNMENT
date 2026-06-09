#include<iostream>
#include<string.h>
using namespace std;
class String
{
    char str[100];
public:
    void getString()
    {
        cin>>str;
    }
    String operator +(String s)
    {
        String temp;
        strcpy(temp.str,str);
        strcat(temp.str,s.str);
        return temp;
    }
    void display()
    {
        cout<<str;
    }
};
int main()
{
    String s1,s2,s3;
    cout<<"Enter First String: ";
    s1.getString();
    cout<<"Enter Second String: ";
    s2.getString();
    s3=s1+s2;
    cout<<"Concatenated String: ";
    s3.display();
}