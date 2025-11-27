#include <iostream>
using namespace std;

void traversal(int arr[], int n)
{
    cout << "Array elements : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int searchElements(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return i;
    }
    return -1;
}
int insertElement(int arr[], int n, int pos, int value)
{
    for (int i = 0; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    return n + 1;
}

int deleteElement(int arr[], int n, int pos)
{
    for (int i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    return n - 1;
}
int main()
{
    int arr[100] = {10, 20, 30, 40, 50};
    int n = 5;
    cout << "Initial Array : ";
    traversal(arr, n);
    n = insertElement(arr, n, 2, 17);
    cout << "After insertion at index 2 : ";
    traversal(arr, n);
    n = deleteElement(arr, n, 3);
    cout << "Ater deletion in index 3 : ";
    traversal(arr, n);
    int key = 30;
    int index = searchElements(arr, n, key);
    if (index != -1)
        cout << "Element " << key << " Found at index " << index << endl;
    else
        cout << "Element " << key << "Not found " << endl;
}