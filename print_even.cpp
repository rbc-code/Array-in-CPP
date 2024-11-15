//wap to print even number given array

#include<iostream>
using namespace std;
int main ()
{
     int arr[]={23,54,77,34,88,12,9};
     int len=sizeof(arr)/sizeof(arr[0]);
     
    for(int i=0; i<len; i++)
    {
       if(arr[i]  % 2 == 0 )
       {
        cout<<"Even no="<<i<<"\n";
       }
    }
    return 8;
    
}