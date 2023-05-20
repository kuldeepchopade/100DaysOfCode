int isPalindrome(string S)
    {
       int n= S.length();
       int s=0,e=n-1;
       while(s<=e) {
           if(S[s]==S[e]){
               s++,e--;
           }
           else {
               return 0;
           }
       }
       return 1;
    }
	/*
  Example 1:

Input: S = "abba"
Output: 1
Explanation: S is a palindrome
Example 2:

Input: S = "abc" 
Output: 0
Explanation: S is not a palindrome
  */
