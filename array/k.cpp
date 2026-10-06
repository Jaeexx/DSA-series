#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int n=5;
    int k=2;
    //4,5,1,2,3
    int i=0;
    int temp=0;
    for(int j=0;j<k;j++)
    {
        temp=arr[j];
    }
    for(int j=n-k;j<n;j++)
    {
       arr[i]=arr[j];
       i++; 
    }
    for(int j=k;j<n;j++)
    {
        arr[j]=arr[temp];
    }
    
    for(int j=0;j<n;j++)
    {
        cout<<arr[j];
    }
}