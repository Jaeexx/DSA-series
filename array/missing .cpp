#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,4,5};
    int size=4;
    int i;
    int sum1=0;
    int sum2=0;
    sum1=(size*(size+1))/2;
    for( i=0;i<size;i++)
    {
        sum2=sum2+arr[i];

    }
    if(sum1!=sum2)
    {
        cout<<i;
    }
    return 0;
}