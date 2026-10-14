#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,4,5};
    int n=4;
    int b[]={2,3,5,6};
    int m=4;
    int i=0;
    int j=0;

    while(i<n && j<m)
    {
        if(a[i]<b[j])
        {
            i++;
        }
        else if(a[i]==b[j])
        {
            cout<<a[i]<<" ";
            i++;
            j++;
        }
        else if(a[i]>b[j])
        {
            j++;
        }
    }
}