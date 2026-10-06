#include<iostream>
using namespace std;
//1,0,9,1
//1,9,1,0
void mv(int arr[],int size)
{
    int i=0;
    for(int j=0;j<size;j++)
    {
        if(arr[j]>0)
        {
            arr[i]=arr[j];
            i++;
        }
    }
    for(int j=i;j<size;j++)
    {
        arr[j]=0;
    }
    for(int j=0;j<size;j++)
    {
        cout<<arr[j];
    }
}
int main()
{
    int arr[]={1,2,0,3,0,0};
    int size=6;
    mv(arr,size);
    return 0;
}