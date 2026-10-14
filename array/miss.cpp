#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,4,5};
    int n=5;

    //missing number is 3

    int sumreq=0;
    sumreq=n*(n+1)/2; //15
   

    int sum=0;
    for(int i=0;i<n-1;i++)
    {    
       sum=sum+a[i];//13
       
    }
    
    cout<<sumreq-sum;

    

}