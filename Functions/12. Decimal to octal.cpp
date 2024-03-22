#include <iostream>
using namespace std;

int convert(int n)
{
    int x = 1; // x --> base
    int ans = 0;

    while (n > 0)
    {
        int lastDigit = n % 8;
        ans += lastDigit * x;
        n /= 8;
        x *= 10;
    }
    return ans;
}

int main()
{
    int n;

    cout << "Enter decimal number: " << endl;
    cin >> n;

    cout << convert(n) << endl;
    return 0;
}