#include<iostream>
using namespace std;
//2^3
int powerfun(int num)
{
    int power=0;
    for(int i=1;i<=5;i++)
    {
        power=num*i;
    }
    return power;
}
int main()
{
    cout<<powerfun(2);
    return 0;
}