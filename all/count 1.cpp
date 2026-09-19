#include<iostream>
using namespace std;
//1011->3 1 are there
int countone(int num)
{
    int r;
    int count=0;

    while(num>0)
    {
        r=num%10;
        num=num/10;
        if(r==1)
        {
            count++;
        }    

    }
    return count;
}
int main()
{
    cout<<countone(11111);
    return 0;
}