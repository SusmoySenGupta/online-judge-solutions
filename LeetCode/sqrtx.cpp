/* 
	author: Susmoy Sen Gupta
	problem link: https://leetcode.com/problems/sqrtx/
    Runtime: 0ms
*/
class Solution {
public:
    int mySqrt(int x) {
        if(x == 0 || x == 1) return x;
        
        int left = 1, right = x;
        
        while(left < right)
        {
            int mid = left +  (right - left) / 2 ;
            if (x / mid == mid)
                return mid;
            else if(x / mid < mid)
                right = mid;
            else
                left = mid + 1;  
        }
        
        return right - 1;
    }
};