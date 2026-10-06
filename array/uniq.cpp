#include <iostream>
using namespace std;

void unique(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        bool found = false;

        for(int j = i + 1; j < size; j++)
        {
            if(arr[i] == arr[j])
            {
                found = true;
                break;
            }
        }

        if(found == false)
        {
            cout << arr[i] << " ";
        }
    }
}

int main()
{
    int arr[] = {11, 22, 33, 11, 22, 66};
    int size = 6;

    unique(arr, size);

    return 0;
}