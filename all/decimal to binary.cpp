#include<iostream>
using namespace std;
//89->0101
int decimaltobinary(int decnum)
{
    int rem;
    int ans=0;
    int power=1;
    while(decnum>0)
    {
        rem=decnum%2;
        decnum=decnum/2;

        ans =ans+rem*power;
        power=power*10;
    }
    return ans;
}
int main()
{
    int decnum=5;
    cout<<"binary number is"<<decimaltobinary(decnum);
    return 0;
}
