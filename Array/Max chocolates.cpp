#include <iostream>
using namespace std;

int main()
{
    int chocolate = 0, wrapper = 0, rs = 15;
    // 1rs = 1chocolate
    while (rs > 0)
    {
        chocolate++;
        wrapper++;
        rs--;

        if (wrapper % 3 == 0)
        {
            chocolate++;
            wrapper++;
        }
    }
    cout << chocolate << endl;
    return 0;
}