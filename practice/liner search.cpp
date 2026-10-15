#include<iostream>
using namespace std;
int sear(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;

}
int main()
{
    int arr[]={11,22,33,44};
    int size=4;
    int key=88;
    cout<<sear(arr,size,key);
    return 0;
}