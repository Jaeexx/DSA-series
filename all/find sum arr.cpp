#include <iostream>
#include <vector>
using namespace std;

int summ(vector<int> v)
{
    int sum = 0;

    for(int i = 0; i < v.size(); i++)
    {
        sum = sum + v[i];
    }

    return sum;
}

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};

    cout << summ(v);

    return 0;
}