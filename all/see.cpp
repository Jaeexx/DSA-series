#include<iostream>
using namespace std;
int main()
{
    int arr[5]={0,1,0,3,12};
    int size=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    for(int j=i+1;j<size;j++)
    {
        if(arr[i]==arr[j])
        {
            cout<<arr[i];
            i++;
        }
    }
    return 0;
}