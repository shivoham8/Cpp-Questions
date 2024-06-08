#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;

    cout << "Enter no. of elements: " << endl;
    cin >> n;

    int arr[n];
    cout << "Enter elements: " << " ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max_sum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            max_sum = max(max_sum, sum);
        }
    }

    cout << "Maximum subarray sum is: " << max_sum << endl;
    return 0;
}