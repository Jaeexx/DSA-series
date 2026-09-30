#include<iostream>
#include<vector>
using namespace std;
int summ(vector<int>v,int target)
{
    int sum=0;
    for(int i=0;i<v.size();j++)
    {
        for(int j=i+1;i<v.size();i++)
        {
            sum=v[i]+v[j];
            if(sum==target)
            {
                cout<<v[i]<<v[j];
            }
        }
    }
}
int main()
{
    vector<int>v={11,22,33};
    int target =33;
    summ(v,target);
    return 0;
}