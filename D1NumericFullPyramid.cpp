#include <iostream>
using namespace std ;

int main() {

    int n ;
    cin >> n ;

    for (int row = 0 ; row < n ; row++) {
        for(int col = 0 ; col < n-row ; col++) {
            cout << "  " ;
        }

        for(int col = 0 ; col < row  + 1 ; col++ ){
            cout << row + col + 1  << " ";
        }

        for(int col = 2 * row ; col >=  row + 1  ; col--) {
            cout << col  << " " ;
   
        }
   
        
        
        cout << endl ;
    }
}



/*5
          1 
        2 3 2 
      3 4 5 4 3 
    4 5 6 7 6 5 4 
  5 6 7 8 9 8 7 6 5 */
