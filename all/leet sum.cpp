#include<iostream>
using namespace std;
int arrsumfind(int arr[],int size,int target)
{
    int sum=0;
    int i,j;
    
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            sum=arr[i]+arr[j];
            if(sum==target)
            {
                cout<<arr[i];
                cout<<arr[j];
            }
        }
    }
}
int main()
{
    int arr[]={11,22,33,44};
    int size=4;
    int target=33;
    arrsumfind(arr,size,target);
    return 0;
}