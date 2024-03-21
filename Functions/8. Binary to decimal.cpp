#include <iostream>
#include <cmath>
using namespace std;

int convert(int n)
{
    int sum = 0;
    int i = 0;

    while (n > 0)
    {
        int lastDigit = n % 10;
        sum += lastDigit * pow(2, i);
        n /= 10;
        i++;
    }
    return sum;
}

int main()
{
    int n;

    cout << "Enter a binary number: " << endl;
    cin >> n;

    cout << n << " in decimal is " << convert(n) << endl;
    return 0;
}