#include<iostream>
using namespace std;
class Bank
{
    string name, type;
    int accno;
    float balance;
public:
    void assign()
    {
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Account Number: ";
        cin>>accno;
        cout<<"Enter Account Type: ";
        cin>>type;
        cout<<"Enter Balance: ";
        cin>>balance;
    }
    void deposit()
    {
        float amt;
        cout<<"Enter Deposit Amount: ";
        cin>>amt;
        balance += amt;
    }
    void withdraw()
    {
        float amt;
        cout<<"Enter Withdraw Amount: ";
        cin>>amt;
        if(balance >= amt)
            balance -= amt;
        else
            cout<<"Insufficient Balance"<<endl;
    }
    void display()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Balance : "<<balance<<endl;
    }
};
int main()
{
    Bank b;
    b.assign();
    b.deposit();
    b.withdraw();
    b.display();
}