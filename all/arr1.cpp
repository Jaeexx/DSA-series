#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 2, 3};
    int size = 4;

    int i = 0;
    int k=0;

    for(int j = 1; j < size; j++)
    {
        if(arr[i] != arr[j])
        {
            arr[i+1] = arr[j];
            i++;
            k=k+1;
        }
    }
    return k;

    
    

   
    for(int j = 0; j < k; j++)
    {
        cout << arr[j] << " ";
    }

    return 0;
}