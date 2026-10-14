#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int n=5;
    int target=8;

    int i=0;
    int sum=0;
    int j=n-1;
    while(i<j)
    {
      sum=arr[i]+arr[j];
      if(sum==target)
      {
        cout<<arr[i]<<arr[j];
        break;
      }  
      else if(sum>target)
      {
        j--;
      }
      else if(sum<target)
      {
        i++;
      }
    }
}