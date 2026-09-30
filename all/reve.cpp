#include<iostream>
using namespace std;
int reve(int arr[],int size)
{
    int i=0;
    int j=size-1;
    while(arr[i]!=arr[j])
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(int i= 0;i<size;i++)
    {
        cout<<arr[i];
    }
    
}
int main()
{
    int arr[]={11,22,33};
    int size=3;
    return 0;

}