#include<iostream>
#include<vector>
using namespace std;

void dup(vector<int> v)
{
    for(int i = 0; i < v.size(); i++)
    {
        bool duplicate = false;

        for(int j = i + 1; j < v.size(); j++)
        {
            if(v[i] == v[j])
            {
                duplicate = true;
                break;
            }
        }

        if(!duplicate)
        {
            cout << v[i] << " ";
        }
    }
}

int main()
{
    vector<int> v = {11, 22, 11, 22, 33, 44, 44};

    dup(v);

    return 0;
}