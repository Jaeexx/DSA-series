#include<iostream>
using namespace std;

void ro(int arr[], int size, int k)
{
    
    for(int i = size - 1; i >=k; i--)
    {
        cout << arr[i] << " ";
    }

    
    for(int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {11, 22, 33, 44};
    int size = 4;
    int k = 2;

    ro(arr, size, k);

    return 0;
}