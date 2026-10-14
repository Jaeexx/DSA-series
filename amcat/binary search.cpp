#include<iostream>
using namespace std;
void binarys(int arr[],int n,int key)
{
    int low=0;
    int high=n-1;
    int mid=(low+high)/2;
    while(low<high)
    {
        if(arr[mid]==key)
        {
            cout<<mid;
            break;
        }
        else if(arr[mid]>key)
        {
            mid=mid-1;
        }
        else if(arr[mid]<key)
        {
            mid=mid+1;
        }
        
    }
}
int main()
{
    int arr[]={1,2,3,4,5};
    int n=5;
    int key=4;
    binarys(arr,n,key);
}