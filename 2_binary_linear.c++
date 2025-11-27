#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
        if (arr[i] == key)
            return i;

    return -1;
}
int bimnarySearch(int arr[], int n, int key)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
            return mid;
        else if (key > arr[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    int arr[10] = {22, 33, 44, 55, 66, 88};
    int n = 6;
    int key = 66;
    int pos1 = linearSearch(arr, n, key);
    if (pos1 != -1)
        cout << "Linear search : found at index :" << pos1 << endl;
    else
        cout << "Linear search : Not found " << endl;

    int pos2 = bimnarySearch(arr, n, key);
    if (pos2 != -1)
        cout << "Binary search : found at index : " << pos2 << endl;
    else
        cout << "Binaryh search : Not found " << endl;
}