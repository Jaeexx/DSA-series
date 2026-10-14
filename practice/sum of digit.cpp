#include<iostream>
using namespace std;
int main()
{
    int number;
    cin>>number;
    int sum=0;
    while(number>0)
    {
        int r=number%10;
        sum=sum+r;
        number=number/10;
    }
    cout<<sum;
    return 0;
}