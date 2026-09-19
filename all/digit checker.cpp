#include<iostream>
using namespace std;
//145
//3
void digitchecker(int num)
{
    int tocheck=0;
    while(num>0)
    {
         num=num/10;
        
        tocheck++;
        
        
    }
    cout<<tocheck;
}
int main()
{
    digitchecker(19995);
    return 0;
}