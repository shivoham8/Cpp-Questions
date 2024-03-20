#include <iostream>
using namespace std;

void factorial(int n)
{
    int f = 1;

    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }
    cout << f << endl;
    return;
}

int main()
{
    int n;

    cout << "Enter number: " << endl;
    cin >> n;

    factorial(n);
    return 0;
}