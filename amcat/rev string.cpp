#include<iostream>
using namespace std;
void reve(string &str)
{
    int i=0;
    int j=str.length()-1;
    while(i<j)
    {
        swap(str[i],str[j]);
        i++;
        j--;
    }
    for(int k=0;k<str.length();k++)
    {
        cout<<str[k];
    }
}
int main()
{
    string str;
    cin>>str;
    reve(str);

}
