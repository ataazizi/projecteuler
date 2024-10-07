#include <iostream>

using namespace std ;

int main() {
    
    int t = 1 ,f =1 , b=1 , three=3 ,five=5 ,sum3 = 0,sum5=0 , sum15=0;
    
    while (t*three < 1000) {
        sum3 += t * three ;
        t++;
    }
        while (f*five < 1000) {
            sum5 += f * five ;
            f++;
        }
            while (b*five*three < 1000) {
                sum15 += b * five * three ;
                b++;
            }
        cout << "the sum of multiplies of 3 below 1000 is : " << sum3 << "\n";
        cout << "the sum of multiplies of 5 below 1000 is : " << sum5 << "\n";
        cout << "the sum of multiplies of 15 below 1000 is : " << sum15 << "\n";
    
        cout << "the sum of all the multiplies of 3 or 5 below 1000 is : " << sum3+sum5-sum15 << "\n";
    
        return 0 ;
    }
