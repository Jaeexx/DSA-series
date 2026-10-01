#include<iostream>
using namespace std;
bool sortt(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]<=arr[i+1])
        {
           
        }
        else
        {
          return false; 
        }
        
    }
    return true;
}
int main()
{
    int arr[]={1,3,2};
    int size=3;
    sortt(arr,size);
    return 0;
}