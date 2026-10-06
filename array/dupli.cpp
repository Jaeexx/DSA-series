#include<iostream>
using namespace std;
void dupli(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                cout<<arr[i]<<" ";
            }

        }
    }
}
int main()
{
    int arr[]={11,22,33,11,22,66};
    int size=6;
    dupli(arr,size);
    return 0;
}