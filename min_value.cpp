// wap to diaplay the minimum value in the given Array

#include <iostream>
using namespace std;
int main ()
{
    int a[]={23,55,76,99,11,54,9};
    int len = sizeof(a)/sizeof(a[0]);
    int rb=INT_MAX;
    for(int i=0; i<len; i++)
    {
        if(rb>a[i])
        {
            rb=a[i];
        }
    }
    cout<<"min value="<<rb;
}