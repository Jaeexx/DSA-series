#include<iostream>
using namespace std;
int ro(int arr[],int size)
{
    for(int i=size-1;i>=0;i--)
    {
        cout<<arr[i];
    }
}
int main()
{
    int arr[]={11,22,33,44};
    int size=4;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
    ro(arr,size);
    return 0;
}