#include<iostream>
using namespace std;
//1234
//1+2+3+4
int sumofdigit (int n)
{
    int sum =0;
    while(n>0)
    {
        int r=n%10;
        n=n/10;
        sum=sum+r;

    }
    return sum;
}
int main()
{
    int n=1234;
    cout<<"sum:"<<sumofdigit(n);
    return 0;
}