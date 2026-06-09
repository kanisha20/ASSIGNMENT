#include<iostream>
using namespace std;
class Cricketer
{
public:
    string name;
    void input()
    {
        cout<<"Enter Cricketer Name: ";
        cin>>name;
    }
};
class Batsman : public Cricketer
{
    int totalRuns;
    float average;
    int bestPerformance;
public:
    void getData()
    {
        input();

        cout<<"Enter Total Runs: ";
        cin>>totalRuns;
        cout<<"Enter Best Performance: ";
        cin>>bestPerformance;
    }
    void calculateAverage()
    {
        average = totalRuns / 10.0;
    }
    void display()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Total Runs : "<<totalRuns<<endl;
        cout<<"Average Runs : "<<average<<endl;
        cout<<"Best Performance : "<<bestPerformance<<endl;
    }
};
int main()
{
    Batsman b;
    b.getData();
    b.calculateAverage();
    b.display();
}