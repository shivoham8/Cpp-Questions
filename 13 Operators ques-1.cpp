#include <iostream>
using namespace std;
 
int main()
{
    int i = 1;

    // Pehle i ki value store hui. fir i++ 2 ho gaya or uske baad ++i se 3. uske baad add hoga 1+3 = 4
    //  1     3
    i = i++ + ++i;

    cout << i << endl;
    return 0;
}