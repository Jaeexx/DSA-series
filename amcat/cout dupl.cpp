#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,1,2,2,3,4,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            count++;
        }
    }
    cout<<count;

}