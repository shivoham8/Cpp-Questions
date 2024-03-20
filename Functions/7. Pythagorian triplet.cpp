#include <iostream>
#include <math.h>
using namespace std;

bool check(int x, int y, int z)
{
    int a = max(x, max(y, z));
    int b, c;
    if (a == x)
    {
        b = y;
        c = z;
    }
    else if (a == y)
    {
        b = x;
        c = z;
    }
    else
    {
        b = x;
        c = y;
    }

    if (pow(a, 2) == ((pow(b, 2)) + (pow(c, 2))))
    {
        return true;
    }
    return false;
}

int main()
{
    int base, height, hypotenuse;

    cout << "Enter base, height, hypotenuse: " << endl;
    cin >> base >> height >> hypotenuse;

    if (check(base, height, hypotenuse) == true)
    {
        cout << base << ", " << height << ", " << hypotenuse << " are Pythagorian triplets " << endl;
    }
    else
    {
        cout << base << ", " << height << ", " << hypotenuse << " are not Pythagorian triplets " << endl;
    }
    return 0;
}