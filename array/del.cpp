#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,1,2,2,4,4};
    int size=6;

    int i=0;
    for(int j=1;j<size;j++)
    {
        if(arr[i]!=arr[j])
        {
            i++;
            arr[i]=arr[j];
            
            
        }
       
    }
    for(int k = 0; k <= i; k++)
{
    cout << arr[k] << " ";
}
    

}