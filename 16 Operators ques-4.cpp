#include <iostream>
using namespace std;
 
int main()
{
    int i = 10;
    int j = 20;
    int k;

    // 10 - 9 + 19 - 20 + 9 - 20 + 10 - 19
    k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;

    cout << i << " " << j << " " << k << " "; 
    return 0;
}