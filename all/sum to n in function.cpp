#include<iostream>
using namespace std;
//sum 1 to n
//1+2+3
int sumall(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        
        sum=sum+i;
       
    }
     return sum;
}
int main()
{
    
    cout<<"sum of all is :"<<sumall(5);
return 0;
}
