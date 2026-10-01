#include<iostream>
using namespace std;
int diffi(int arr[],int size)
{
    int maxx=INT_MIN;
    int minn=INT_MAX;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>maxx)
        {
            maxx=arr[i];
        } 
        if(arr[i]<minn)
        {
            minn=arr[i];
        }
    }
    return maxx-minn;
}
int main()
{
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<diffi(arr,size);
    return 0;
}