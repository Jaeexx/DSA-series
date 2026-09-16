//sum of no form 1 to n
#include <iostream>
using namespace std;
int main()
{
    int n,sum =0,i;

    cout<<"enter ur no";
    cin>>n;
    
    for(i=1;i<=n;i++)
    {
        sum+=i;
       
    }
     cout<<"sum"<<sum;
    return 0;
}
