#include<iostream>
using namespace std;
//1234
//4321
int revofsigit (int n)
{
    int rev=0;
    while(n>0)
    {
        int r=n%10;
        n=n/10;
        rev=rev*10+r;

    }
    return rev;
    
}
void pall (int rev,int n)
{
    if(rev==n)
    {
        cout<<"palli";
    }
    else{
        cout<<"not";
    }
}
int main()
{
    int n=121;
    int rev = revofsigit(n);
    pall(rev,n);

    return 0;
}