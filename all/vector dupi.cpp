#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v{5,11,22,22,33,11};

    for(int i=0; i<v.size(); i++)
    {
        for(int j=i+1; j<v.size(); j++)
        {
            if(v[i] == v[j])
            {
                cout << v[i] << endl;
            }
        }
    }

    return 0;
}