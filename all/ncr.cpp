#include<iostream>
using namespace std;
//n!/r!(n-r)!
int factorial(int num)
{
    //1*2*3
    int fact=1;
    for(int i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    return fact;
}
//ncr
int ncr(int n,int r)
{
    int factn=factorial(n);
    int factr=factorial(r);
    int nandr=factorial(n-r);
   int ans = factn / (factr * nandr);

    return ans;
}


int main()
{
    int num;
    int n=6;
    int r=3;

    cout<<ncr(n,r);

    return 0;
}