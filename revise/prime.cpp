#include<iostream>
using namespace std;
int main()
{
    int n;
    bool p='true';
    cout<<"enter no";
    cin>>n;

    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            p=false;
            break;
        }

    }
    if(p==true)
    {
        cout<<"prime";

    }
    else{
        cout<<"nop";
    }
    return 0;
}