#include<iostream>
using namespace std;
int main()
{
    int number;
    cin>>number;
    bool flag=true;
    for(int i=2;i<number-1;i++)
    {
        if(number%i==0)
        {
            flag=false;
        }
        
    }
    if(flag==true)
    {
        cout<<"prime";
    }
    else{
        cout<<"no";
    }
    return 0;
}