// Time complexity: O(n)

#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n, key;

    cout << "Enter no. of elements in array: ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Enter key element: ";
    cin >> key;

    int index = linearSearch(arr,n,key);
    cout << key << " found at index " << index << endl;

    return 0;
}