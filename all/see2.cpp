#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,4,7};
    int brr[]={2,3,8};
    int arrsize=3;
    int brrsize=3;
    int i=0,j=0;
    while(i<arrsize && j<brrsize)
    {
        if(arr[i]<brr[j])
        {
            cout<<arr[i]<<" ";
            i++;
        }
        else
        {
            cout<<brr[j]<<" ";
            j++;
        }
    }
    for(int k=i;k<arrsize;k++)
    {
        cout<<arr[k]<<" ";
    }
    for(int k=j;k<brrsize;k++)
    {
        cout<<brr[k]<<" ";
    }
    return 0;
} 