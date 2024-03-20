#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number: " << endl;
    cin >> num;

    int n = num;
    int sum = 0;

    while (n > 0)
    {
        int lastDigit = n % 10;

        sum += pow(lastDigit, 3);
        n = n / 10;
    }

    if (num == sum)
    {
        cout << num << " is an Armstrong number." << endl;
    }
    else
    {
        cout << num << " is not an Armstrong number." << endl;
    }
    return 0;
}