#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three numbers: " << endl;
    cin >> a >> b >> c;

    if (a > b) {
        if(a > c) {
            cout << a << " is the greatest number " << endl;
        }
        else {
            cout << b << " is the greatest number " << endl;
        }
    }

    if(b > a) {
        if (b > c) {
            cout << b << " is the greatest number " << endl;
        }
        else {
            cout << c << " is the greatest number " << endl;
        }
    }

    return 0;
}