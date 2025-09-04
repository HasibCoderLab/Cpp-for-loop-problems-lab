// ================================================
//               Language: C++ / Cpp
//               Topic   : [ForLoop]
//               Problem : 👉👉 [8]
//               Want    : Fibonacci
//
// ================================================
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number ";
    cin >> n;
    int first = 0, second = 1;
    for(int i  = 1 ; i <=n ; i++){
        cout << first  <<" "  <<endl;
         int next = first + second;
        first = second;
        second= next;
   cout << second  <<endl;
    }

    return 0;
}