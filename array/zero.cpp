#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,0,2,0,3,4,0,0};
    int n=8;

    int i=0;
    for(int j=0;j<n;j++)
    {
        if(arr[j]!=0)
        {
            arr[i]=arr[j];
            i++;
        }
    }
    for(int j=i;j<n;j++)
    {
        arr[j]=0;
    }
    for(int j=0;j<n;j++)
    {
        cout<<arr[j];
    }
}