#include<iostream>
using namespace std;
int main()
{
    int n=5;
    for(int i=0;i<n;i++)
    {
        //spaces
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        if(i!=4)
        {
        cout<<"*";
        }
        if(i==4)
         {
            for(int j=0;j<n+4;j++)

            {
                cout<<"*";
            }
         }  
        //half

        if(i!=0 )
        {
            for(int j=2;j<2*i+1;j++)
            {
                cout<<" ";
            }
            if(i!=4)
        
        cout<<"*";
        }
          
        cout<<endl;
    }
    return 0;
}