#include<iostream>
using namespace std;
int main()
{
    int n;
    int i;
    bool prime = true;

    cout<<"enter no";
    cin>>n;

    for(i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            prime = false;
            break;
        }

    }
    if(prime==true)
    {
        cout<<"prime";
    }
    else
    {
        cout<<"not prime";
    }
    return 0;
}
