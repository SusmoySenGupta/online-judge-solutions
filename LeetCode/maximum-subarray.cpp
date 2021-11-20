/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Leetcode
	problem no: maximum-subarray
	problem name: Maximum Subarray
	problem link: https://leetcode.com/problems/maximum-subarray/

	Tags: Array, Divide & conquer
    
    Technique, time & space complexity: 
    // O(N) - Array
    Runtime: 92 ms, faster than 91.09% of C++ online submissions for Maximum Subarray.
    Memory Usage: 67.8 MB, less than 11.74% of C++ online submissions for Maximum Subarray.
    
*/

#include <iostream>
#include <vector>

using namespace std;

// O(N)
int maxSubArray(vector<int> &nums)
{
    int maxSum = INT_MIN, currentSum = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        currentSum += nums[i];
        if (currentSum > maxSum)
            maxSum = currentSum;
        if (currentSum < 0)
            currentSum = 0;
    }

    return maxSum;
}

int main()
{
    vector<int> nums{-2, 1, -3, 4, -1, 2, 1, -5, 4};

    cout << "Output: " << maxSubArray(nums) << endl;

    return 0;
}
