#include<iostream>
using namespace std;
void ro(int arr[],int size,int k)
{
    
    for(int i=2;i<size;i++)
    {
        arr[i-k]=arr[i];

    }
    for(int i=0;i<=k-1;i++)
    {
        int temp=arr[i];
        arr[size-k]=temp;
        k=k-1;
       
    }
    
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

}
int main()
{
    int arr[5]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int k=2;
    ro(arr,size,k);
}