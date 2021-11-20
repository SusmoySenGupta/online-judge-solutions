/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Leetcode
	problem no: two-sum
	problem name: Two Sum
	problem link: https://leetcode.com/problems/two-sum

	Tags: Array, Hashmap
    
    Technique, time & space complexity: 
    Hashmap
    Runtime: 12 ms, faster than 77.67% of C++ online submissions for Two Sum.
    Memory Usage: 10.9 MB, less than 28.51% of C++ online submissions for Two Sum.
*/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> hash;

    for (int i = 0; i < nums.size(); i++)
    {
        int index = target - nums[i];
        if (hash.find(index) != hash.end())
            return {hash[index], i};
        hash[nums[i]] = i;
    }

    return {};
}

int main()
{
    vector<int> nums{2,7,11,15}, ans;
    int target = 9;

    ans = twoSum(nums, target);

    printf("Output: [%d, %d]\n", ans[0], ans[1]);

    return 0;
}
