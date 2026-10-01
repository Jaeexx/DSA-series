#include<iostream>
#include<vector>
using namespace std;
void rdupli(vector<int>v)
{
    for(int i=0;i<v.size();i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            if(v[i]==v[j])
            {
                    
            }
            else if(v[i]!=v[j])
            {
                cout<<v[i]<<v[j];
            }
            
        }
    }
}
int main()
{
    vector<int>v={11,22,11};
    rdupli(v);
    return 0;
}