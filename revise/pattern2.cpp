#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    for(int i = 0; i < n; i++)
    {
        // spaces
        for(int j = 0; j < i; j++)
        {
            cout << " ";
        }

        // numbers
        for(int j = 1; j <= 2*n-1-2*i; j++)
        {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}