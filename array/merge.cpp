#include<iostream>
using namespace std;
int main()
{
    int a[]={1,3,5};
    int n=3;
    int b[]={2,4,6};
    int m=3;
    int i=0;
    int j=0;
    while(i<m && j<n)
    {
        if(a[i]<b[j])
        {
            cout<<a[i];
            i++;

        }
        else
        {
            cout<<b[j];
            j++;
        }
        
    }
    return 0;

}