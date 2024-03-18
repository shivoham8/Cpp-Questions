#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number: " << endl;
    cin >> num;

    if (num % 2 == 0 && num % 3 == 0)
    {
        cout << num << " is divisible by both 2 and 3" << endl;
        }
    else if (num % 2 == 0)
    {
        cout << num << " is divisible by 2 only" << endl;
            
    }
    else if (num % 3 == 0)
    {
        cout << num << " is divisible by 3 only" << endl;
            
    }
    else
    {
        cout << " Divisble by none " << endl;
            
    }

    return 0;
}