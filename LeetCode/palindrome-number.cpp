/* 
    author: Susmoy Sen Gupta
	problem link: https://leetcode.com/problems/palindrome-number/
    Runtime: 0ms
*/
class Solution {
public:
    int isPalindrome(int x) {
        if(x < 0 || ( x% 10 == 0 && x != 0) ) return false;
        
        int revertedNumber = 0;
        
        while(x > revertedNumber )
        {
            revertedNumber = revertedNumber * 10 + x % 10;
            x /= 10;
        }
       
        return x == revertedNumber || x == revertedNumber/10;
    }
};