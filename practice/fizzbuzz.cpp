#include<iostream>
using namespace std;
int main()
{
    int number;
    cin>>number;
    if(number%3==0 && number%5==0)
    {
        cout<<"fizzbuzz";
    }
    else if(number%3==0)
    {
        cout<<"fizz";
    }
    else if(number%5==0)
    {
        cout<<number;
    }
    return 0;
}