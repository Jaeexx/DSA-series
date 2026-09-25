#include<iostream>
using namespace std;
int main()
{
    int n=3;
    int i;
    char ch;
    
    for( i=0;i<n;i++)
    { 
        //spaces
        for(int j=0;j<n-i-1;j++)
        {
         cout<<" ";
        }
     //abc
            for(int j=0;j<2*i+1;j++)
            {
                
                cout<<char(97+j);
            }
    cout<<endl;

    }
    return 0; 
    
   
    
}