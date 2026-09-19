#include<iostream>
using namespace std;
//n=2
//square=25
int square(int n)
{
    return n*n;
}
int main()
{
    int n;
    cout<<"enter a number :";
    cin>>n;

    cout<<"square is:"<<square(n);
    return 0;
}