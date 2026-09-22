#include<iostream>
using namespace std;
int sumarr(int arr[],int size)
{
    int sum=0;
    int i;
    for( i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}
int proarr (int arr[],int size)
{
    int pro=1;
    int j;
    for( j=0;j<size;j++)
    {
        pro=(pro*arr[j]);
    }
    return pro;
}
int main()
{
    int arr[]={1,2,3};
    int size=3;
    cout<<"sus is"<<sumarr(arr,size);
    cout<<endl;
    cout<<"pro is"<<proarr(arr,size);
    return 0;


}
