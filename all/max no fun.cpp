#include<iostream>
using namespace std;
void max(int a,int b)
{
    //a=10;b=20
    //b=20
    if(a>b)
    {
        cout<<"a="<<a;
    }
    else{
        cout<<"b="<<b;
    }

}
int main()
{
    int a;
    int b;
    cout<<"a:";
    cin>>a;
    cout<<endl;
    cout<<"b:";
    cin>>b;
    max(a,b);
    return 0;
}