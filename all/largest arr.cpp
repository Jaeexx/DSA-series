#include<iostream>
using namespace std;
int main()
{
    int arr[5]={11,22,33,9,2};
    int n=5;
    int index=0;
    int i;
    int largest=INT_MIN;
    for( i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
           

        }
        if(largest>arr[i])
    {
        cout<<i;
    }
    
    }
    
return 0;
}
