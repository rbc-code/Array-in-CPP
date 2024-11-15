#include <iostream>
using namespace std;
int main()
{
    int arr[]={2,1,5,3,1,7};
    int s=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<s; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\nAfter\n";
    for(int i=0; i<s; i++)
   {
        for(int j=0; j<s-1; j++)
        {
            int tem;
            if(arr[j]>arr[j+1])
            {
                tem=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=tem;
            }
            
        }
        
   }
   for(int i=0; i<s; i++)
   {
    cout<<arr[i]<<"\t";
   }

}