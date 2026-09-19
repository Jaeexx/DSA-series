#include<iostream>
using namespace std;
//123
//234
//increase each by 1
int digi(int num)
{
    int r;
    while(num>0)
    {
         r=num%10;
         num=num/10;
        
        r=r+1;
    }
    
    return r;
}
int main()
{
    cout<<digi(123);
    return 0;
}