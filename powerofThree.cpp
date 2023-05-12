class Solution {
public:
    bool isPowerOfThree(int n) {
        
        int ans = 1;
        for(int i = 0 ; i <= 30 ; i++) {
            
            
            if (ans == n) {
                return true ;
            }
            if (ans < INT_MAX/2)
            
            ans = ans * 3 ;
           
                
        
            
        }
        return false ;
    }
};

/*
Example 1:

Input: n = 27
Output: true
Explanation: 27 = 33
Example 2:

Input: n = 0
Output: false
Explanation: There is no x where 3x = 0.
Example 3:

Input: n = -1
Output: false
Explanation: There is no x where 3x = (-1).
 

*/
