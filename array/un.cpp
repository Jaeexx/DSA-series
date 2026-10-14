#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,4,5};
    int n=4;
    int brr[]={2,3,5,6};
    int m=4;

    int i=0;
    int j=0;

    while(i<n && j<m)
    {
        if(arr[i]<brr[j])
        {
            cout<<arr[i];
            i++;
        }
        else if(arr[i]==brr[j])
        {
            cout<<arr[i];
            i++;
            j++;
        }
        else if(arr[i]>brr[j])
        {
            cout<<brr[j];
            j++;

        }
    }

   
}