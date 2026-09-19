#include<iostream>
using namespace std;
void palindrome(int num)
{
    //121->121 yes 
    int orig=num;
    int temp=num;
    int rev=0;
    while(temp>0)
    {
        int r=temp%10;
        temp=temp/10;
        rev=rev*10+r;
    }
    
    if(rev==orig)
    {
        cout<<"yupp";
    }
    else
    {
        cout<<"nooo";

    }

}
int main()
{
    palindrome(121);
    return 0;
}