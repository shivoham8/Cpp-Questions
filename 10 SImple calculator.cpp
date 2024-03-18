#include <iostream>
using namespace std;
 
int main()
{
    float num1, num2;
    char input;

    cout << "Enter first number: " << endl;
    cin >> num1;

    cout << "Enter second number: " << endl;
    cin >> num2;

    cout << "Enter operation(+,-,*,/): " << endl;
    cin >> input;

    switch (input)
    {
    case '+':
        cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
        break;

    case '-':
        cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
        break;

    case '*':
        cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
        break;

    case '/':
        cout << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
        break;

    default:
        cout << "Wrong operation!! " << endl;
        break;
    }
    return 0;
}