
//find pivot element using binary search

#include <iostream>
#include <vector >
using namespace std ;


int findPivot(vector <int> arr) {
    int s = 0 ; 
    int e = arr.size() -1 ;

    int mid = s + (e - s) /2 ;

    while(s <= e ) {
        if(arr[mid] > arr[mid+ 1 ]) {
            return mid ;
        }
        if(arr[mid -1 ] > arr[mid]) {
            return mid - 1 ;
        }
        if(arr[s] >= arr[mid] ) {
            e = mid -1 ;
        }
        else {
            s = mid + 1 ;
            
            
        }
        mid = s + ( e- s) / 2  ;
     
    }
       return -1 ;
    
}

int main() {
    vector <int > arr{   1 , 2  , 3 , 7 ,4 , 5 , 6 } ;
   
    int ans = findPivot(arr) ;
    cout << " Index " << ans << endl ;
} 

//output:-
// Index 3 
