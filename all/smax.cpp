#include<iostream>
using namespace std;
int smaxx(int arr[],int size)
{
    int maxx=INT_MIN;
    int smaxi=INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>maxx)
        {
            smaxi=maxx;
            maxx=arr[i];
        }
        else if(arr[i]>smaxi && arr[i]!=maxx)
        {
            smaxi=arr[i];
        }
    }
    return smaxi;
}
int main()
{
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<smaxx(arr,size);
    return 0;
}
