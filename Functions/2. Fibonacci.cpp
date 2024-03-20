#include <iostream>
using namespace std;

void fib(int n)
{
    int t1 = 0;
    int t2 = 1;

    for (int i = 1; i <= n; i++)
    {
        cout << t1 << " ";
        int nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return;
}

int main()
{
    int n;

    cout << "Enter number of digits: " << endl;
    cin >> n;

    fib(n);

    return 0;
}