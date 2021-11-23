/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Leetcode
	problem no: search-insert-position
	problem name: 35. Search Insert Position
	problem link: https://leetcode.com/problems/search-insert-position

	Tags: Array, Binary Search
    
    Technique, time & space complexity: 
    // Approach 1: Lower Bound - O(log n)
    Runtime: 3 ms, faster than 83.51% of C++ online submissions for Search Insert Position.
    Memory Usage: 9.8 MB, less than 22.29% of C++ online submissions for Search Insert Position.
*/

#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int> &nums, int target)
{
    int L = 0, R = nums.size() - 1, mid;

    while (L <= R)
    {
        mid = (L + R) / 2;

        if (nums[mid] == target)
            return mid;
        else if (nums[mid] > target)
            R = mid - 1;
        else
            L = mid + 1;
    }

    return R + 1;
}

int main()
{

    return 0;
}
