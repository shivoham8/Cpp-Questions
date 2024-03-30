// Time Complexity: O(log n)

#include <iostream>
using namespace std;

void sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int binarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int n, key;

    cout << "Enter no. of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;

    sort(arr, n);
    cout << "Sorted array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Enter key element: ";
    cin >> key;

    int result = binarySearch(arr, n, key);
    if (result != -1)
    {
        cout << key << " found at index " << result << endl;
    }
    else
    {
        cout << key << " not found in the array" << endl;
    }
    return 0;
}