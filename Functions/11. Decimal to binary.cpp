#include <iostream>
using namespace std;

int convert(int n)
{
    int x = 1;
    int ans = 0;

    while (n > 0)
    {
        int lastDigit = n % 2;
        ans += lastDigit * x;
        n /= 2;
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