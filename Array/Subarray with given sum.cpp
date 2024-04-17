#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter no. of elements: ";
    cin >> n;
    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;

    cout << "Enter sum: ";
    cin >> k;

    int i = 0, j = 0, start = -1, end = -1, sum = 0;
    while (j < n && sum + arr[j] <= k)
    {
        sum += arr[j];
        j++;
    }

    if (sum == k)
    {
        cout << i + 1 << " " << j << endl;
        return 0;
    }

    while (j < n)
    {
        sum += arr[j];
        if (sum > k)
        {
            sum -= arr[i];
            i++;
        }

        if (sum == k)
        {
            start = i + 1;
            end = j + 1;
            break;
        }
        j++;
    }

    cout << start << " " << end << endl;

    return 0;
}