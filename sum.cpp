//wap to display the sum of the values th array

#include<iostream>
using namespace std;
int main ()
{
    int arr[]={44,54,76,99,22};
    int len=sizeof(arr)/sizeof(arr[0]);
    int s=0;
    for(int i=0; i<len; i++)
    {
        s=s+arr[i];
    }
    cout<<"Length of Array="<<len<<"\n";
    cout<<"sum of arry="<<s<<"\n";
}