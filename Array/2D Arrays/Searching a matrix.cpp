#include <iostream>
using namespace std;

int main()
{
    int m, n;

    cout << "Enter number of rows: ";
    cin >> m;

    cout << "Enter number of columns: ";
    cin >> n;

    int arr[m][n];

    cout << "Enter elements: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int element;
    cout << "Enter element: ";
    cin >> element;
    int row, col;
    bool flag = false;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == element)
            {
                row = i+1;
                col = j+1;
                flag = true;
            }
        }
    }

    if (flag)
    {
        cout << element << " found at index " << row << " " << col << endl;
    }
    else
    {
        cout << element << " not present in the matrix" << endl;
    }
    return 0;
}