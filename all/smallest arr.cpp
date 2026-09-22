#include<iostream>
using namespace std;
int main()
{
    int arr[5]={90,78,1,7,2};
    int n=5;
    int smallest=INT_MAX;
    for(int i=0;i<n;i++)
    {
       if( arr[i]<smallest)
       {
        smallest=arr[i];

       }
    }
    cout<<smallest;

    return 0;
}