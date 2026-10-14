#include <iostream>
using namespace std;

int main()
{
    int n1 = 0;
    int n2 = 1;
    int n3;
    int temp;

    cout << n1 << " " << n2 << " ";

    for (int i = 3; i <= 5; i++)
    {
        n3 = n1 + n2;
        cout << n3 << " ";

        temp = n2;
        n2 = n3;
        n1 = temp;
    }

    return 0;
}