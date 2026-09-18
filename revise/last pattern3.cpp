#include<iostream>
using namespace std;
int main()
{
    int n=4;
    for(int i=0;i<n;i++)
    {
        //stars
        cout<<"*";
        //middle space
        if(i!=0 || i!=1)
        {
            for(int j=2;j<i+1;j++)
            {
                cout<<" ";
            }
            
        }
        if(i!=0)
        {
            cout<<"*";
        }
        //more spaces
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        //moree space
        if(i!=n-1)
        {
            for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        //star
        cout<<"*";
        }
        //middlesapce
        if(i==0 || i==1)
        {
            cout<<"";
        }
        else
        {
            for(int j=2;j<2*i-1;j++)
            {
                cout<<" ";
            }
        }
        if(i!=0)
        {
            cout<<"*";
        }
      
        cout<<endl;
    }
    for(int i=0;i<n-1;i++)
    {
        //stars
        cout<<"*";
        if(i==0)
        {
            cout<<" ";
        }
        if(i!=n-2)
        {
            cout<<"*";
        }
        //spaces
        for(int j=0;j<i+1;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<i+1;j++)
        {
            cout<<" ";
        }
        cout<<"*";
         if(i==0)
        {
            cout<<" ";
        }

        if(i!=n-2)
        {
            cout<<"*";
        }
        cout<<endl;
    }

return 0;
}