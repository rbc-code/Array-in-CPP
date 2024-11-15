// sum of odd number given array

#include<iostream>
using namespace std;
int main()
{
int arr[]={10,11,12,13,14,15,65,23};
int len=sizeof(arr)/sizeof(arr[0]);
int s=0,so=0;
for(int i=0;i<len; i++)
{
    if(arr[i]%2==0)
    {
      s=s+arr[i];
    }
    else
    {
        so=so+arr[i];
    }
}
cout<<"ODD No Sum="<<so<<"\n";
cout<<"Even No Sum="<<s;
}