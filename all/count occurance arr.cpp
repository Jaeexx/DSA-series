#include<iostream>
using namespace std;
int oarr(int arr[],int size)
{
    int count=0;
    int i;
    int j;
    for(i=0;i<size;i++)
    {
        
            if(arr[i]==11)
            {
                count++;
            }

        
        
    }
    return count;
}
int main()
{
    int arr[]={11,22,11,33};
    int size=4;
    cout<<oarr(arr,size);
    return 0;

}