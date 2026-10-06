#include<iostream>
#include<vector>
using namespace std;
int largi(vector<int>v)
{
    int maxx=INT_MIN;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>maxx)
        {
            maxx=v[i];
        }
    }
    return maxx;
}
int main()
{
    vector<int>v={11,22,55,99,2};
    cout<<largi(v);
    return 0;
}