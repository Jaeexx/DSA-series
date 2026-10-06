#include<iostream>
#include<vector>
using namespace std;
int largi(vector<int>v)
{
    int fmax=INT_MIN;
    int smax=INT_MIN;
  

    for(int i=0;i<v.size();i++)
    {
        if(v[i]>fmax)
        {
            smax=fmax;
            fmax=v[i];
        }
        else if(v[i]>smax && v[i]!=fmax)
        {
            smax=v[i];
        }
    }
    return smax;
}

int samli(vector<int>v)
{
    int fmin=INT_MAX;
    int smin=INT_MAX;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]<fmin)
        {
            smin=fmin;
            fmin=v[i];
        }
        else if(v[i]<smin && v[i]!=fmin)
        {
            smin=v[i];
        }
    }
    return smin;
}
    

int main()
{
    vector<int>v={11,22,77,33,99,66,55};
    cout<<largi(v);
    cout<<endl;
    cout<<samli(v);
    
    return 0;
}