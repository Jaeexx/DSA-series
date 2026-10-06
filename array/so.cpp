#include <iostream>
using namespace std;

bool so(int arr[], int size)
{
    bool flag = true;

    for(int i = 0; i < size - 1; i++)
    {
        if(arr[i] > arr[i + 1])
        {
            flag = false;
        }
    }

    return flag;
}

int main()
{
    int arr[] = {11, 2, 3, 4};
    int size = 4;

    cout << so(arr, size);

    return 0;
}