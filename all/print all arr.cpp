#include<iostream>
#include<vector>
using namespace std;
void allarr(vector<int>v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
int main()
{
    vector<int>v={1,2,3,4,5};
    allarr(v);
    return 0;
}