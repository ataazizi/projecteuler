#include <iostream>
using namespace std;

int main() {

  long long d, f , i=2 , n = 600851475143 ;
    bool is_prime=true ;
    
    while (i<n/2) {
        
        f = n % i ;
        if ( f==0){
            for (d = 2; d <= i/2; ++d) {
                if (i % d == 0) {
                    is_prime = false;
                    break;;;
                }
            }
            cout << i << "   is " << is_prime << "\n" ;                        // prime factors will have an "is 1" statement
        }
                i++;
            }
    
            cout << "the code finished and the biggest output with \" is 1 \" statement is our answer \n " ;
    
            return 0;
        }
