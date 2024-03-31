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
    cout << endl;

    int ans = 2; // Length of longest arithmatic subarray
    int prevdiff = arr[1] - arr[0];
    int j = 2;
    int curr = 2; // Current length

    while (j < n)
    {
        if (prevdiff == arr[j] - arr[j - 1])
        {
            curr++;
        }
        else
        {
            prevdiff = arr[j] - arr[j - 1];
            curr = 2;
        }
        ans = max(ans,curr);
        j++;
    }

    cout << ans << endl;
    return 0;
}