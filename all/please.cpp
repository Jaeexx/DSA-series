#include<iostream>
using namespace std;
void please(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<=i+1;j++)
        {
            if(arr[i]<=arr[j])
            {
                swap(arr[i],arr[j]);

            }
            else if(arr[i]==0 && arr[j]==0)
            {
                swap(arr[i],arr[i+2]);
                swap(arr[j],arr[j+2]);
            }
        }
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    

}
int main()
{
    int arr[]={0,1,0,3,12};
    int size=sizeof(arr)/sizeof(arr[0]);
    please(arr,size);
    return 0;
}