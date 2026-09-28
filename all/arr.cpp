#include<iostream>
using namespace std;
void aarray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int size;
    int arr[size];
    cout<<"enter size";
    cin>>size;
    cout<<endl;
    cout<<"enter elments";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];

    }
   
    aarray(arr,size);
    return 0;

}