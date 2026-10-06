#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,1,2,3,3};
    int n=5;
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