/* 
    author: Susmoy Sen Gupta
	problem link: https://leetcode.com/problems/valid-perfect-square/
    Runtime: 0ms
*/
class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num <= 1) 
            return true;
        
        long long int left = 1, right = num, mid;
        
        while(left <= right) {
            
            mid = left + (right - left) / 2;
            
            if (mid*mid == num) {
                return true;
            } else if (mid*mid < num) {
                left = mid  + 1;
                
            } else {
                right = mid - 1;
            }
        }
        
        return false;  
    }
};