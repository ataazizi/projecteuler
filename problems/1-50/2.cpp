#include <iostream>
using namespace std;

int main() {
    int t1 = 0, t2 = 1, nextTerm = 0, n , sum=0 ;
    
    nextTerm = t1 + t2;

    while(nextTerm < 4000000) {
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
        
        if (nextTerm%2 == 0) {
            sum+=nextTerm ;
        }
        
    }
    cout << "the sum of the even-valued terms is : " << sum << "\n" ;
    
    return 0;
}
