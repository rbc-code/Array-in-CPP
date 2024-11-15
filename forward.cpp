#include<iostream>
using namespace std;
int main()
{
    int arr[4]={1,4,7,9};
    int s=sizeof(arr)/sizeof(arr[0]);
    cout<<"\forward traversing\n";
    for(int i=0; i<s; i++)
    {
        cout<<arr[i]<<"\n";
    }
    cout<<"\backward traversing\n";
    for(int i=s-1; i>=0; i--)
    {
        cout<<arr[i]<<"\n";
    }
}