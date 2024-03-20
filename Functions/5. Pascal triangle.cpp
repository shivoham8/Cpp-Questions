#include <iostream>
using namespace std;

int factorial(int n)
{
    int f = 1;

    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }
    return f;
}

int main()
{
    int n;

    cout << "Enter number of rows: " << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            int digit = (factorial(i)) / ((factorial(i - j)) * (factorial(j)));
            cout << digit << " ";
        }
        cout << endl;
    }

    return 0;
}