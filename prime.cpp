#include<iostream>
using namespace std;
int main()
{
    int arr[]={32,44,65,1,21,0,76};
    int s=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<s; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n Prime number are :\n";
}