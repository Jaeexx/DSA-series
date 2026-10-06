#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,0,3,0,5,0,2};
    int size=7;
    int i=0;
    for(int j=0;j<size;j++)
    {
        if(arr[j]!=0)
        {
            swap(arr[i],arr[j]);
            i++;
        }
    }
    for(int k=0;k<size;k++)
    {
        cout<<arr[k]<<" ";
    }
    return 0;
}