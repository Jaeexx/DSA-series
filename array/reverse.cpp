#include<iostream>
using namespace std;
void rev(int arr[],int size)
{
    int i=0;
    int j=size-1;
    while(i<j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;

    }
    for(int k=0;k<size;k++)
    {
        cout<<arr[k]<<" ";
    }
}
int main()
{
    int arr[]={1,2,3,4,5};
    int size=5;
    rev(arr,size);
    return 0;
}