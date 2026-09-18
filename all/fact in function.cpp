#include<iostream>
using namespace std;
//fact
//1*2*3
int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    
    }
    return fact;
    
}
int main()
{
    int n;
    cout<<"n is :";
    cin>>n;
    cout<<"fact is"<<factorial(n);
    return 0;
}