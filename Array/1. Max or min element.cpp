#include <iostream>
using namespace std;

int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else if (b > a)
    {
        return b;
    }
    else
    {
        return a;
    }
}

int min(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else if (b < a)
    {
        return b;
    }
    else
    {
        return a;
    }
}

int main()
{
    int n;

    cout << "Enter size of array: " << endl;
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = arr[0];

    for (int i = 1; i < n; i++)
    {
        result = max(result, arr[i]);
    }
    cout << result << " is the max element." << endl;

    for (int i = 1; i < n; i++)
    {
        result = min(result, arr[i]);
    }
    cout << result << " is the min element." << endl;
    return 0;
}