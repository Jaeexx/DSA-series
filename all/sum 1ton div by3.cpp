#include<iostream>
using namespace std;

int main()
{
    //sum 1 to n divide by 3
     
    int n;
    int sum=0;
    int i;

    cout<<"enter ur no";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        if(i%3==0)
        {
            sum=sum+i;

        }
    }
    cout<<"sum is "<<sum;
    return 0;
    
}