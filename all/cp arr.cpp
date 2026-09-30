#include<iostream>
using namespace std;
int main()
{
    int arr[]={11,22,33};
    int size=3;
    for(int i=0;i<size;i++)
    {
        cout<<"a arr"<<arr[i];

    }
    cout<<endl;
    int barr[size];
    for(int i=0;i<size;i++)
    {
        barr[i]=arr[size-i-1];
        cout<<"b arr"<<barr[i];
    }
    return 0;

}