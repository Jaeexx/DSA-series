#include<iostream>
using namespace std;
int botd(int bnum)
{
    int r;
    int ans=0;
    int power=1;
    while(bnum>0)
    {
        r=bnum%10;
        bnum=bnum/10;
        ans=ans+r*power;
        power=power*2;
    }
    return ans;
}
int main()
{
    cout<<botd(11);
    return 0;

}