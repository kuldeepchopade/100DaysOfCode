    int LastIndex(string s, char p){
        //complete the function here
        int n=s.length();
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]==p)
            {
                return i;
            }
        }
        return -1;
    }
/*

Example 1:

Input: S = "Geeks", P = 'e'
Output: 2
Explanation: Last index of 'e' 
is 2.
Example 2:

Input: S = "okiyh", P = 'z'
Output: -1
Explanation: There is no character
as 'z'.
*/
