#include <iostream>
using namespace std;

int main()
{
    int rows;

    cout << "Enter no. of rows: " << endl;
    cin >> rows;

    // for (int i = rows; i >= 1; i--)
    // {
    //     int num = 1;
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows + 1 - i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}