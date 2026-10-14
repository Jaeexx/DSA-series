#include<iostream>
using namespace std;
int main()
{
    int n=3;
    //spaces
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
      
        //stars
        for(int j=0;j<2*i+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    


}  
    }
    
    