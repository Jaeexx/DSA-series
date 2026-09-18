#include<iostream>
using namespace std;
int main()
{
    int n;

    cout<<"enter no:";
    cin>>n;
     cout<<endl;
    if(n==0)
    {
        cout<<"no is zero";
    }
    else if(n<0)
    {
        cout<<"no is negative";
    }
    else{
        cout<<" no is positive";
    }
    return 0;
}