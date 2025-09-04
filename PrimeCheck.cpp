// ================================================
//               Language: C++ / Cpp
//               Topic   : [ForLoop]
//               Problem : 👉👉 [9]
//               Want    : DigitSum
//
// ================================================
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number ";
    cin >> n;
    if (n <= 1)
    {
        cout << n << "is Not Prime Number " << endl;
        return 0;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << n << "is Not Prime Number " << endl;
            return 0;
        }
    }

    cout << n << "is  Prime Number " << endl;

    return 0;
}