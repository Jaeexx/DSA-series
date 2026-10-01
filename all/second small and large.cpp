#include <iostream>
#include <climits>
using namespace std;

int slarge(int arr[], int size)
{
    int large = INT_MIN;
    int slarge = INT_MIN;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] > large)
        {
            slarge = large;
            large = arr[i];
        }
        else if(arr[i] > slarge && arr[i] != large)
        {
            slarge = arr[i];
        }
    }

    return slarge;
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    int size = 4;

    cout << slarge(arr, size);

    return 0;
}