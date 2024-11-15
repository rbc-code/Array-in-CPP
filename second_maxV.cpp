//wap to print second highes value given Array
#include<iostream>
using namespace std;
int main()
{
    int arr[]={23,45,76,90,54,34,22,1,0,444,21};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = INT_MIN;
    int smx = INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(max<arr[i])
        max= arr[i];
    }
    for(int i=0; i<n; i++)
    {
        if(smx<arr[i] && arr[i]!=max)
        {
            smx = arr[i];
        }
    }
    cout<<"Max Value="<<max<<"\n";
    cout<<"Second max value="<<smx;

    return 888;
    
}