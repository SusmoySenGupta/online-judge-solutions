/* 
	author: Susmoy Sen Gupta
	problem link: https://leetcode.com/problems/two-sum/
    Runtime: 0ms
*/
class Solution {
public:
    int reverse(int x) {
        
        long long int res = 0, remainder;
        while(x)
        {
            remainder = x % 10;
            res = res * 10 + remainder;
            x /= 10;
        }
        
        if(res >= 2147483647 || res <= -2147483647) return 0;
        
        return res;
    }
};