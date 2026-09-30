#include<iostream>
using namespace std;
int main()
{
    int arr[]={11,22,33,44};
    int size=sizeof(arr)/4;
    int i=0;
    int j=size-1;
    while(i<=j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i];
    }
    return 0;
}

