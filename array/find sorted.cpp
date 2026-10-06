#include<iostream>
#include<vector>
using namespace std;
bool sorti(vector<int>v)
{
    bool flag=true;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>v[i+1])
        {
            flag=false;
            break;
        }
    }
    return flag;
    
}
int main()
{
    vector<int>v={1,2,3,8,5};
    cout<<sorti(v);
    return 0;
}
