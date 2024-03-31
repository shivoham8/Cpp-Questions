#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter no. of elements: ";
    cin >> n;
    int arr[n + 1];
    arr[n] = -1;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;

    if (n == 1)
    {
        cout << n << endl;
        return 0;
    }

    int max_element = -1;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max_element && arr[i] > arr[i + 1])
        {
            ans++;
        }
        max_element = max(max_element, arr[i]);
    }
    cout << "No. of record breaking days: " << ans << endl;
    return 0;
}