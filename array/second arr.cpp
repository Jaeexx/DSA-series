#include<iostream>
using namespace std;
int main()
{
    int arr[]={11,22,33,44,55};
    int size=5;
    int fmaxi=INT_MIN;
    int smaxi=INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>fmaxi)
        {
            smaxi= fmaxi;
            fmaxi=arr[i];
            
        }
        else if(arr[i]>smaxi && arr[i]!=fmaxi)
        {
            smaxi=arr[i];
        }
    }
    cout<<"First Maximum: "<<fmaxi<<endl;
    cout<<"Second Maximum: "<<smaxi<<endl;
    return 0;
}