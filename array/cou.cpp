#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,1,3,2};
    int n=5;

    int count=0;
    for(int j=0;j<n;j++)
    {
        for(int i=j+1;i<n;i++)
        {
         if(arr[j]==arr[i])
        {
            count++;
        }
        }
        if(count==0)
        {
            cout<<arr[j];
        }


    }
    
    
}