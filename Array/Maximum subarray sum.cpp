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
    // 1--> Time complexity: O(n^3)
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i; j < n; j++)
    //     {
    //         int sum = 0;
    //         for (int k = i; k <= j; k++)
    //         {
    //             sum += arr[k];
    //         }
    //         max_sum = max(max_sum, sum);
    //     }
    // }

    // 2--> Kadane's Algorithm: O(n)
    int currSum = 0;

    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        if (currSum < 0)
        {
            currSum = 0;
        }
        max_sum = max(currSum, max_sum);
    }
    cout << "Maximum subarray sum is: " << max_sum << endl;
    return 0;
}
