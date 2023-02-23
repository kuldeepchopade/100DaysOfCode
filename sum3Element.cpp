#include <iostream>
#include <vector>
using namespace  std ;

int main() {

    vector <int > arr{10 ,20 , 30 , 40 } ;
    int sum = 70 ;

    for(int i = 0 ; i < arr.size() ; i++) {
        int element = arr[i] ;

        for(int j = i +1  ; j < arr.size() ; j++) {
            int element2 = arr[j] ;
            
            for(int k = j + 1 ; k < arr.size() ; k++) {
                int element3 = arr[k]  ;
                if(arr[i] + arr[j] + arr[k] == sum ) {
                    cout << "Triplet  found = " << arr[i] <<" " << arr[j] << " " <<arr[k] << endl ;
                }
            }

        }
        
    }
}

//Triplet found 10 20 40 
