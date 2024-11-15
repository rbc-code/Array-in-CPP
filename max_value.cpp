#include <iostream>
using namespace std;
int main ()
{
    int arr[]={23,54,77,34,88,12,9};
    int len=sizeof(arr)/sizeof(arr[0]);
    int rb=INT_MIN;
    for(int i=0; i<len; i++)
    {
        if(rb<arr[i])
        {
            rb=arr[i];
        }
    }
    cout<<"Max Value="<<rb;
}