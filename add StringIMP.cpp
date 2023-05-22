class Solution {
public:


    void addRE(string& num1 , string& num2 , int p1 , int p2 , string& ans , int carry = 0) {

        //base case 
        if(p1 < 0 && p2 < 0 ) {
            if(carry != 0) {
                ans.push_back(carry + '0') ;
            }
            return ;
        }
        //ek cse solve 
        int n1 = (p1 >= 0 ? num1[p1] : '0') -'0' ;
        int n2 = (p2 >= 0 ? num2[p2] : '0') -'0' ;
        int csum = n1 + n2 + carry ;
        int digit = csum%10 ;
        carry = csum/10 ;
        ans.push_back(digit + '0') ;

        //recursive relation
        addRE(num1 , num2 , p1 - 1  , p2 - 1 , ans ,carry ) ;   

    }
    string addStrings(string num1, string num2) {
        string ans ="" ;
        addRE(num1 , num2 , num1.size() -1 , num2.size() -1 , ans , 0) ;
        reverse(ans.begin() , ans.end()) ;
        return ans ;
    }
};
/*

Example 1:

Input: num1 = "11", num2 = "123"
Output: "134"
Example 2:

Input: num1 = "456", num2 = "77"
Output: "533"
Example 3:

Input: num1 = "0", num2 = "0"
Output: "0"
*/
