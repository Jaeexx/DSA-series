#include<iostream>
using namespace std;
int main()
{
    int n=3;

    for(int i=0;i<n;i++)
    {
        //space
        for(int k=0;k<n-i-1;k++)
        {
            cout<<" ";
        }
        for(int k=0;k<i+1;k++)
        {
            cout<<"*";
        }
        for(int k=0;k<i;k++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    
   return 0; 
}