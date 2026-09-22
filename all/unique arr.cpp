#include<iostream>
using namespace std;
int uniques(int arr[],int size)
{
    int i;
    int j;
    for(i=0;i<size;i++)
    {
        for(j=1;j<=size;j++)
        {
            if(arr[i]!=arr[j])
            {
                return arr[i];
            }
        }
    }
}
int main()
{
    int arr[]={55,22,33,11};
    int size=4;
    cout<<uniques(arr,size);
    return 0;
    
}