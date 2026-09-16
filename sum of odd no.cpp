#include <iostream>
using namespace std;
int main()
{
    //odd no sum only
    int n,i,sum=0;


    cout<<"enter the no:";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
           sum=sum+i;
        }
        
    }
 cout<<"sum"<<sum;   
return 0;
    
}