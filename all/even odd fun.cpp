#include<iostream>
using namespace std;
//n=2
//even
void evenodd(int n)
{
    if(n%2==0)
    {
        cout<<"even";
    }
    else
    {
        cout<<"odd";
    }
}
int main()
{
    int n;
    cout<<"enter a number :";
    cin>>n;
    evenodd(n);
    return 0;
}