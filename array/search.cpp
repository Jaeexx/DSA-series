#include<iostream>
#include<vector>
using namespace std;
int sea(vector<int>v,int key)
{
    
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==key)
        {
            return i;
            
        }
        
    }
    return -1;
}
int main()
{
    vector<int>v={22,11,5,11,2};
    int key=11;
    cout<<sea(v,key);
    return 0;
}   
