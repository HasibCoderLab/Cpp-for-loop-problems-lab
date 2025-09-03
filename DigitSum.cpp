// ================================================
//               Language: C++ / Cpp
//               Topic   : [ForLoop]
//               Problem : 👉👉 [6]
//               Want    : DigitSum
//                        
// ================================================
#include <iostream>
using namespace std;
int main(){
    int n ; 
    int sum = 0;
    for (int  i = 0; i <n > 0; i++)
    {
        int digit = n%10;
        sum = sum + digit;
        n  = n /10;
        cout<<"print " << sum <<endl;
    }
    
    return 0 ;
}