#include <iostream>
using namespace std;
 
int main()
{
    int a = 10;
    int b;

    b = ++a;
    // Pehle a 11 hua fir a mei store hua or fir b mei

    cout << a << " " << b << endl;

    int c = 10;
    int d;

    d = c++;

    cout << c << " " << d << endl;
    // Pehle d mei c ki value store hui fir c++

    return 0;
}