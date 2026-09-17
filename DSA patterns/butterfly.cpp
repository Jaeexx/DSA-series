#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    // 1st half
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }

        for(int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        for(int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        for(int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    // 2nd half
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - i; j++)
        {
            cout << "*";
        }

        for(int j = 0; j < i; j++)
        {
            cout << " ";
        }

        for(int j = 0; j < i; j++)
        {
            cout << " ";
        }

        for(int j = 0; j < n - i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}