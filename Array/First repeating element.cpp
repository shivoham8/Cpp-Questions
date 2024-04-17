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

    const int N = 1e6 + 2;
    int index[N];

    for (int i = 0; i < N; i++)
    {
        index[i] = -1;
    }

    int minindex = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (index[arr[i]] != -1)
        {
            minindex = min(minindex, index[arr[i]]);
        }
        else
        {
            index[arr[i]] = i;
        }
    }

    if (minindex == INT_MAX)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << minindex + 1 << endl;
    }
    return 0;
}