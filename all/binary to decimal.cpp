#include<iostream>
using namespace std;
int binarytodecimal (int binarynum)
{//100
//4
    int ans=0;
    int r;
    int sum=0;
    int power =1;
    while(binarynum>0)
    {
        r=binarynum%10;
        binarynum=binarynum/10;

        ans=ans+r*power;
        

        power=power*2;

        
    }
return ans;
}
int main()
{
    cout<<binarytodecimal(111);
    return 0;
}