#include<iostream>
using namespace std;
int maxx(int arr[],int size)
{
    int i;
    int j;
    int min=INT_MIN;
    for(i=0;i<size;i++)
    {
        if(arr[i]>min)
        {
            swap(arr[i],min);
        }
    }
    
    
}
int main()
{
    int arr[]={11,22,33};
    int size=3;
    cout<<maxx(arr,size);
    return 0;
}