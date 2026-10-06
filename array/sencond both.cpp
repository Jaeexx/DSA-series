#include<iostream>
#include<vector>
using namespace std;
int boo(vector<int>v)
{
    int lar=INT_MIN;
    int slar=INT_MIN;
    

    for(int i=0;i<v.size();i++)
    {
        if(v[i]>lar)
        {
            slar=lar;
            lar=v[i];
        }
        else if(v[i]>slar && v[i]!=lar)
        {
            slar=v[i];
        }
    }
    return slar;

    int smal=INT_MAX;
    int ssmall=INT_MAX;
    
    for(int i=0;i<v.size();i++)
    {
        if(v[i]<smal)
        {
            ssmall=smal;
            smal=v[i];
        }
        else if(v[i]<ssmall && v[i]!= smal)
        {
            ssmall=v[i];
        }
    }
    return ssmall;
}
int main()
{
    vector<int>v={11,22,33,44,55};
    cout<<boo(v);
    
    return 0;
}