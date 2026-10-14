#include<iostream>
using namespace std;
int main()
{
    int number;
    cin>>number;
    int rev=0;
    while(number>0)
    {
        int r=number%10;
        number=number/10;
        rev=rev*10+r;
    }
    cout<<rev;
    return 0;
}