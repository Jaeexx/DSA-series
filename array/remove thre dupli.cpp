#include<iostream>
using namespace std;
int main()
{
    int arr[]={11,22,33,22,55,11,22};
    int size=7;
    int temp;
    for (int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                temp=arr[i];
                cout<<arr[i]<<" ";
            }
            else if(temp==arr[i])
            {
                break;
            }
            
        }
    }
    return 0;
}