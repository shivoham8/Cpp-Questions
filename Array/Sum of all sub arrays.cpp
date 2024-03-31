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

    int currentSum = 0;
    for (int i = 0; i < n; i++)
    {
        currentSum = 0;
        for (int j = i; j < n; j++)
        {
            currentSum += arr[j];
            cout << currentSum << " ";
        }
    }
    return 0;
}