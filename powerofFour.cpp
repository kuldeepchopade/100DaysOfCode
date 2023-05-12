class Solution {
public:
    bool isPowerOfFour(int n) {
        int ans = 1 ;

        for(int i = 0 ; i <=  30 ; i++) {

            if(ans == n ) {
                return true ;
            }
            if(ans < INT_MAX/2) {
                ans = ans * 4 ;
            }
        }
        return false ;
    }
};

/*
Example 1:

Input: n = 16
Output: true


Example 2:

Input: n = 5
Output: false


Example 3:

Input: n = 1
Output: true
*/
