#include<iostream>
using namespace std;
int countevenn(int num)
{
    int r;
    int count=0;
    while(num>0)
    {
        r=num%10;
        num=num/10;
        if(r%2==0)
        {
            count++;
        }
        
    }
    return count;
}
int main()
{
    int num=123;
    
    cout<<countevenn(num);
    return 0;
}