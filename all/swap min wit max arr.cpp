#include<iostream>

using namespace std;

int min(int arr[], int size)
{
    int min = INT_MAX;
    int index = 0;

    for(int i=0; i<size; i++)
    {        if(arr[i] < min)
        {
            min = arr[i];
            index = i;
        }
    }

    return index;
}

int max(int arr[], int size)
{
    int max = INT_MIN;
    int index = 0;

    for(int i=0; i<size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
            index = i;
        }
    }

    return index;
}

void minmaxswap(int arr[], int size)
{
    int minIndex = min(arr, size);
    int maxIndex = max(arr, size);

    swap(arr[minIndex], arr[maxIndex]);

    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {11,22,33};
    int size = 3;

    minmaxswap(arr,size);

    return 0;
}