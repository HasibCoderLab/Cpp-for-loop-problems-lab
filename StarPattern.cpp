// ================================================
//               Language: C++ / Cpp
//               Topic   : [For Loop]
//               Problem : 👉 Star Pattern
//               Want    : Take input N and print star pattern
// ================================================
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

  
    return 0;
}