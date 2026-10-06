#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5};
    int size=5;
    int temp=a[0];
    for(int i=1;i<size;i++)
    {
        a[i-1]=a[i];
        
    }
    a[size-1]=temp;
    for(int i=0;i<size;i++)
    {
        cout<<a[i];
    }
}