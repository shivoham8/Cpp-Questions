#include <iostream>
using namespace std;

string sum(string a, string b)
{
    int aLength = a.length();
    int bLength = b.length();
    string ans = " ";
    int i = 0, carry = 0;

    while (i < aLength || i < bLength || carry != 0)
    {
        int x = 0;
        if (i < aLength && a[aLength - i - 1] == '1')
        {
            x = 1;
        }

        int y = 0;
        if (i < bLength && b[bLength - i - 1] == '1')
        {
            y = 1;
        }
        ans = to_string((x + y + carry) % 2) + ans;
        carry = (x + y + carry) / 2;
        i += 1;
    }
    return ans;
}

int main()
{
    string a, b;

    cout << "Enter the two binary numbers: " << endl;
    cin >> a >> b;

    cout << sum(a, b) << endl;
    return 0;
}