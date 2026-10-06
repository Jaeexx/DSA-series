#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int size=5;
    int temp=arr[0];
    for(int i=1;i<size;i++)
    {
       arr[i-1]=arr[i];
    }
    arr[size-1]=temp;
    for(int j=0;j<size;j++)
    {
        cout<<arr[j]<<" ";
    }
    return 0;
}