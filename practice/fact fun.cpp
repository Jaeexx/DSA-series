#include<iostream>
using namespace std;
int factt(int n)
{
    int fa=1;
    for(int i=1;i<=n;i++)
    {
        fa=fa*i;
    }
    return fa;
}
int main()
{
    int n;
    cin>>n;
    cout<<factt(n);
    return 0;
}