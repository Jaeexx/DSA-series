#include<iostream>
using namespace std;
int sumarr(int arr[],int size)
{
    int i;
    int sum=0;
    for(i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}
int main()
{
    int arr[]={11,22};
    int size=2;
    cout<<sumarr(arr,size);
    return 0;
}