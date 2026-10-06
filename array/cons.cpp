#include<iostream>
using namespace std;
void con(int arr[],int size)
{
    int count=0;
    int maxcount=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==1)
        {
            count++;
            maxcount=max(maxcount,count);
        }
        else if(arr[i]==0)
        {
            count=0;

        }

        
    }
    cout<<maxcount;
    
    
    
}
int main()
{
    int arr[]={1,1,0,1,1,1,0,1,1};
    int size=9;
    con(arr,size);
    return 0;

}