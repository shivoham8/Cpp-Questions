#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
    int n, max_value = 0;

    cout << "Enter no. of elements: ";
    cin >> n;
    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        max_value = max(max_value, arr[i]);
        cout << max_value << " ";
    }
    return 0;
}