#include<iostream>
using namespace std;
int grearr(int arr[],int size,int gre)
{
    int coutn=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>gre)
        {
           coutn++; 
        }
    }
    return coutn;
}
int main()
{
    int arr[]={11,22,33};
    int size=3;
    int gre=11;
    cout<<grearr(arr,size,gre);
    return 0;
}