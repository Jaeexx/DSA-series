#include<iostream>
#include<vector>
using namespace std;
int dupli(vector<int>v)
{
    for(int i=0;i<v.size();i++)
    {
        for(int j=1;j<v.size();j++)
        {
            if(v[i]!=v[j])
            {
                return v[i];
            }
        }
    }
}
int main()
{
    vector<int>v={11,22,11};
    cout<<dupli(v);
    return 0;
}