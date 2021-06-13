/* 
    author: Susmoy Sen Gupta
	problem link: https://leetcode.com/problems/two-sum/
    Runtime: 4ms
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len = nums.size();
         vector<int> result;
        for (int i = 0; i < len;i++) {
            for (int j = i+1; j < len;j++){
                if (nums[i] + nums[j] == target) {
                    result = {i,j};
                    return result;
                }
            }
        }

        return result;
    }
};
