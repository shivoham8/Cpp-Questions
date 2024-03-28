#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string convert(int n)
{
    string ans = "";

    while (n > 0)
    {
        int lastDigit = n % 16;
        if (lastDigit <= 9)
        {
            ans = ans + to_string(lastDigit);
        }
        else
        {
            char c = 'A' + lastDigit - 10;
            ans.push_back(c);
        }
        n /= 16;
    }
    reverse(ans.begin(), ans.end());
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