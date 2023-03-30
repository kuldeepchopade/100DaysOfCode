#include <iostream>
using namespace std ;



int main() {
    int n = 4 ;
         char ch = 'Z' - n + 1 ;
         cout <<ch  << " ";
         ch--;
         cout << endl ;
    for (int row = 2 ; row <= n   ;row++) {
      
         char ch = 'Z' - n + row  ;
         cout <<ch  << " ";
        for(int col =  2; col < row   ; col++) {
            char ch = 'Z' - n + row + 1;
            ch-- ;
            cout << ch << " " ;
            ch++ ;


        }
        ch-- ;
             cout << ch << " " ;


        cout << endl ;


    }
}
