#include <iostream>
using namespace std;

int main()
{
    int num;
    int rows = 3;

    cout << "Enter number of stars: " << endl;
    cin >> num;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            if (((i + j) % 4 == 0) || (i == 2 && j % 4 == 0))
            {
                cout << "*  ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}