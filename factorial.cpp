#include<iostream>
using namespace std;
int main()
{
    //factorial 1*2*3 till n

    int i;
    int fact=1;
    int n;

    cout<<"enter no";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        
    }
    cout<<"fact is"<<fact;

    return 0;

}