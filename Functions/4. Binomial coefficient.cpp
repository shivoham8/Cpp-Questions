#include <iostream>
using namespace std;

int factorial(int n)
{
    int f = 1;

    for (int i = 2; i <= n; i++)
    {   
        f *= i;
    }
    return f;
}

int main()
{
    int n, r;

    cout << "Enter n and r: " << endl;
    cin >> n >> r;

    int result = (factorial(n)) / ((factorial(n - r)) * (factorial(r)));

    cout << result << endl;
    return 0;
}