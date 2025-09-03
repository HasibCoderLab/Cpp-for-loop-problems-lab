// ================================================
//               Language: C++ / Cpp
//               Topic   : [ForLoop]
//               Problem : 👉👉 [4]
//               Want    : MultiplicationTable
//                        
// ================================================
#include <iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter number ";
    cin >> n;
    int Mul = 1;
    for (int i = 1 ; i<=10;i++){
      int  result = n * i;
        cout<<  "Output " << result <<endl;
    }
    return 0 ;
}