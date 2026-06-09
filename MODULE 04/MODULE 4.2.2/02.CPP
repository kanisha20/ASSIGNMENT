#include<iostream>
using namespace std;
template <class T>
void sortArray(T arr[], int n)
{
    T temp;
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main()
{
    int arr[5];
    cout<<"Enter 5 Elements:"<<endl;
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
    }
    sortArray(arr, 5);
    cout<<"\nSorted Array:"<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
}