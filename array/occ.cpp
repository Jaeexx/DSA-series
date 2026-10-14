#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,3,5};
    int key=3;
    int f=0;
    int size=6;

    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            f=i;
            break;
            
        }
        else if(arr[i]==key && i!=f)
        {
            cout<<i;
        }
    }


}