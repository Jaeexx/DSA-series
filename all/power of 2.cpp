#include<iostream>
using namespace std;
void change(int num)
{
    num=num*2;
    cout<<" fun :"<<num;
}
int main()
{
    int num=10;
    change(num);
    cout<<"main:"<<num;
    
    return 0;
}