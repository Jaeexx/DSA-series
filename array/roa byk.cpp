#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5};
    int n=5;
    int k=2;

    // reverse whole array
    int i=0;
    int j=n-1;

    while(i<j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

    //reverse first k elements
    i=0;
    j=k-1;

    while(i<j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

    //reverse remaining elements
    i=k;
    j=n-1;

    while(i<j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}