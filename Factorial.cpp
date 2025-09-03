// ================================================
//               Language: C++ / Cpp
//               Topic   : [ForLoop]
//               Problem : 👉👉 [5]
//               Want    : Factorial
//                        
// ================================================
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number " ; 
    cin>> n;
    int fact = 1;
    for(int i = 1 ; i<=n ; i++){
        fact  *= i ;
        cout<< fact;
    }

    return 0 ;
}