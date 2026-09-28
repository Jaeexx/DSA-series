#include<iostream>
using namespace std;
int findarr(int arr[],int size)
{
    int i;
    int minarr=INT_MIN;
    
    
    for(i=0;i<size;i++)
    {
        if(arr[i]>minarr)
        {
            minarr=arr[i];
        }

    }
   
    int smax=INT_MIN;
    for(int i=0;i<size;i++)
    {
       if(smax<arr[i] && arr[i]!=minarr) 
       {
            smax=arr[i];
       }

    }
    return smax;

}
int main()
{
    int size;
    int arr[size];
    cin>>size;
    cout<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<findarr(arr,size);
    return 0;
}