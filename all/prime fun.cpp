#include<iostream>
using namespace std;

// check prime
void primeno(int n)
{
    for(int num = 2; num <= n; num++)
    {
        bool p = true;

        for(int i = 2; i < num; i++)
        {
            if(num % i == 0)
            {
                p = false;
                break;
            }
        }

        if(p == true)
        {
            cout << num << " ";
        }
    }
}

int main()
{
    int n = 11;

    primeno(n);

    return 0;
}