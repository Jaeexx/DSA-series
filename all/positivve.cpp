#include<iostream>
#include<vector>
using namespace std;
int counti(vector<int>v)
{
    int count=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    vector<int>v={-1,2,-3,4,-5};
    cout<<counti(v);
    return 0;
}
