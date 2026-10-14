#include<iostream>
using namespace std;
int main()
{
    int number;
    cin>>number;
    int orgi=number;
    int arm=0;
    while(number>0)
    {
        int r=number%10;
        number=number/10;
        arm=arm+r*r*r;
    }
    if(orgi==arm)
    {
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    
    return 0;
}