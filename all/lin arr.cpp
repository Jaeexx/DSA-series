#include<iostream>
using namespace std;
void lin(int arr[],int size,int key)
{
    int i;
    for(i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            cout<<i;
        }
    }

}
int main()
{
    int arr[]={11,22,33};
    int size=3;
    int key=22;
    lin(arr,size,key);
    return 0;

}