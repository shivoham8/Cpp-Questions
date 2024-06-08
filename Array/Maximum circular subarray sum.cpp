#include <iostream>
#include <climits>
using namespace std;

int kadane(int arr[], int n)
{
    int maxSum = INT_MIN;
    int currSum = 0;

    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        if (currSum < 0)
        {
            currSum = 0;
        }
        maxSum = max(currSum, maxSum);
    }
    return maxSum;
}

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

    int wrapSum;
    int nonWrapSum;
    nonWrapSum = kadane(arr, n);

    int totalSum = 0;

    for (int i = 0; i < n; i++)
    {
        totalSum += arr[i];
        arr[i] = -arr[i];
    }

    wrapSum = totalSum + kadane(arr, n);

    cout << "Max circular subarray sum: " << max(wrapSum, nonWrapSum) << endl;

    return 0;
}