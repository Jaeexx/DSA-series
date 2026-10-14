//1,2,3,2
//1,2,3
#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    for(int j=0;j<n;j++)
    {
        if(arr[i]!=arr[j])
        {
            i++;
            arr[i]=arr[j];
        }
    }
    for(int j=0;j<=i;j++)
    {
        cout<<arr[j];
    }
}