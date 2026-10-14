#include<iostream>
using namespace std;
int main()
{
    int count=0;
    int maxcount=0;

    int arr[]={1,1,0,1,1,1,0,1,1};
    int n=9;
    
    
    for(int j=0;j<n;j++)
    {
        if(arr[j]!=0)
        {
            count++;
            maxcount=max(maxcount,count);
        }
        else if(arr[j]==0)
        {
            count=0;
        }

    }
    cout<<maxcount;
}