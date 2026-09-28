#include<iostream>
using namespace std;
int countarr(int arr[], int size)
{
    int i;
    int count =0;
    for(i=0;i<size;i++)
    {
        if(arr[i]>11)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int arr[]={11,22,33,11};
    int size=4;
    cout<<countarr(arr,size);
    return 0;


}