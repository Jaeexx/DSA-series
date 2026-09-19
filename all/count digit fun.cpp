#include<iostream>
using namespace std;
//123
//3
int countdigit (int n)
{
    int count =0;
    while(n>0)
    {
        n=n/10;
        count++;
        

    }
    return count;
}
int main()
{
    cout<<"count is"<<countdigit(456);
    return 0;
}