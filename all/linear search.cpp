#include<iostream>
using namespace std;
int linearsearch(int arr[],int key,int size)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
       
    }
     return-1;
}
int main()
{
    int arr[]={11,22,33};
    int size=3;
    int key=22;
    cout<<linearsearch(arr,key,size);
    return 0;

}