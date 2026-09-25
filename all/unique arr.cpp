#include<iostream>
using namespace std;
void unarr(int arr[],int size)
{
    int i;
    int j;
    for(i=0;i<size;i++)
    {
        for(j=1;j<size;j++)
        {
            if(arr[i]!=arr[j])
            {
                cout<<arr[i];
            }
        }
    }
}
int main()
{
    int size=4;
    int arr[]={11,22,11,33};
    unarr(arr,size);
    return 0;
}
