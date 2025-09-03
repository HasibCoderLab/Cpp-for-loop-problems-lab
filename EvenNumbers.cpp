// ================================================
//               Language: C++ / Cpp
//               Topic   : [ForLoop]
//               Problem : 👉👉 [5]
//               Want    :  EvenNumbers.cpp
//                        
// ================================================
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number " ;
    cin>> n ;
    for(int  i = 0 ; i<=n; i++){
        if(i % 2 == 0){
     cout<<"Even Number is " <<  i <<endl;
    }

    }
    return 0 ;
}