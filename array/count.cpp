#include<iostream>
using namespace std;
int main()
{
    int arr[]={11,22,11,33,11,55,11};
    int size=7;
    int count=0;
    for(int i=0;i<size;i++)
    {
        
            if(arr[i]==11)
            {
                count++;
            }
        
    }
    cout<<count;
    return 0;
}