#include<iostream>
using namespace std;
//33->011+1
int dtob(int decinum)
{
    int rem;
    int ans=0;
    int power=1;
    while(decinum>0)
    {
        rem=decinum%2;
        decinum=decinum/2;
        ans=ans+rem*power;
        power=power*10;

    }
    ans=ans+1;
    return ans;
}
int main()
{
    cout<<"see"<<dtob(5);
    return 0;
}