//squroot print in given array

#include<iostream>
using namespace std;
int main()
{
int arr[]={10,11,12,13,14,15,65,23,81,25,9};
int s=sizeof(arr)/sizeof(arr[0]);
for(int i=0; i<s; i++)
{
    int j=arr[i];
    for(int x=1; x<=j; x++)
    {
        if(x*x==j)
        {
            cout<<j<<"\t";
            break;
        }
    }
}
}