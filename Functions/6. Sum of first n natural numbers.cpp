#include <iostream>
using namespace std;

int sum(int n)
{
    return (n*(n+1))/2;
}

int main()
{   
    int n;

    cout << "Enter upper limit: " << endl;
    cin >> n;

    cout << sum(n) << endl;

    return 0;
}