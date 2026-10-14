#include<iostream>
using namespace std;
void largii(int n1,int n2,int n3)
{
    if(n1>=n2 && n1>=n3)
    {
        cout<<n1;
    }
    else if(n2>=n1 && n2>=n3)
    {
        cout<<n2;
    }
    else
    {
        cout<<n3;
    }
}
int main()
{
    int n1;
    cin>>n1;
    int n2;
    cin>>n2;
    int n3;
    cin>>n3;
    largii(n1,n2,n3);
    return 0;
}