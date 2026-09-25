#include<iostream>
using namespace std;
int main()
{
    int n=2;
    int power=5;
    int ans=1;
    for(int i=1;i<power;i++)
    {
        ans=ans*n;
    }
    cout<<ans;
    return 0;
}