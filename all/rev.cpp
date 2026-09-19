#include<iostream>
using namespace std;
//123
//321
int reverse(int num)
{
    int rev=0;
    while(num>0)
    {
        int r=num%10;
        num=num/10;
        rev=rev*10+r;
        
    }
    return rev;
}
int main()
{
    cout<<"reveres is:"<<reverse(123);
    return 0;
}