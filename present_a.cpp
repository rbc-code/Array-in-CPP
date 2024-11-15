#include<iostream>
using namespace std;
int main()
{
    int arr[]={4,7,8,9,12,23,43,65,1,0,};
    int n = sizeof(arr)/sizeof(arr[0]);
    int rb;
    cout<<"Enter Numbre :";
    cin>>rb;
    bool flag = false;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==rb)
        {
            flag = true;
            break;
        }
    }
    if(flag==true)cout<<rb <<" Is Present";
    else cout<<rb <<" Is not present";

    return 888;
}