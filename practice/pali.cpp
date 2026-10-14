#include<iostream>
using namespace std;
int main()
{
    int number;
    cin>>number;
    int rev=0;
    int orgi=number;
    while(number>0)
    {
        int r=number%10;
        number=number/10;
        rev=rev*10+r;
    }
    if(orgi==rev)
    {
        cout<<"pali";
    }
    else
    {
        cout<<"no";
    }
   
    return 0;
}