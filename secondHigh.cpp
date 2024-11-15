//wap to print second highes value given Array
#include<iostream>
using namespace std;
int main()
{
    int arr[]={230,45,76,900,54,34,22,1,0,444,21};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = INT_MIN;
    int smx = INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(max<arr[i])
        {
            smx=max;
            max=arr[i];
        }
        else
        {
            if(arr[i]>smx && arr[i]!=max)
            {
                smx=arr[i];
            }
        }
        
    }
    cout<<"Second Max Value="<<smx<<"\n";
    cout<<"Max Value="<<max;

    
}