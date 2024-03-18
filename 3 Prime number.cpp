// #include <iostream>
// using namespace std;

// int main()
// {
//     int num;

//     cout << "Enter a number " << endl;
//     cin >> num;

//     bool isPrime = true;

//     for (int div = 2; div <= num / 2; div++)
//     {
//         if (num % div == 0)
//         {
//             isPrime = false;
//             break;
//         }
//     }

//     if (isPrime && num > 1)
//     {
//         cout << num << " is a prime number" << endl;
//     }

//     else
//     {
//         cout << num << " is not a prime number" << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int num;

//     cout << "Enter a number " << endl;
//     cin >> num;

//     int div = 2;

//     while (div < num)
//     {
//         if (num % div == 0)
//         {
//             cout << num << " is not a prime number" << endl;
//             break;
//         }
//         else
//         {
//             div = div + 1;
//         }
//     }

//     if (div >= num)
//     {
//         cout << num << " is a prime number" << endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{

    int num, i;
    cin >> num;

    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << "Non-prime " << endl;
            break;
        }
    }

    if (i == num)
    {
        cout << "Prime " << endl;
    }
    return 0;
}