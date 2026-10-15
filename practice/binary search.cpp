#include<iostream>
#include<vector>
using namespace std;
int bin(vector<int>v,int key)
{
    int low=0;
    int high=v.size()-1;
    int mid=low+high/2;
    while(mid>0)
    {
        if(v[mid]==key)
        {
            return mid;
        }
        else if(v[mid]>key)
        {
            mid=mid-1;
        }
        else 
        {
            mid=mid+1;
        }
    }
    return -1;
}
int main()
{
    vector<int>v={11,22,33,44,55,66};
    int key=99;
    cout<<bin(v,key);
    return 0;
}