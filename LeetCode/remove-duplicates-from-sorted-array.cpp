/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Leetcode
	problem no: remove-duplicates-from-sorted-array
	problem name: Remove Duplicates From Sorted Array
	problem link: https://leetcode.com/problems/remove-duplicates-from-sorted-array

	Tags: Array
    
    Technique, time & space complexity: 
    // O(N)
    Runtime: 12 ms, faster than 67.18% of C++ online submissions for Remove Duplicates from Sorted Array.
    Memory Usage: 18.5 MB, less than 36.10% of C++ online submissions for Remove Duplicates from Sorted Array.
*/

#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    if (nums.size() == 0)
        return 0;

    int count = 0;

    for (int i = 1; i < nums.size(); i++)
        if (nums[i] != nums[count])
            nums[++count] = nums[i];

    return count + 1;
}

int main()
{
    vector<int> nums{0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    cout << "Output: " << removeDuplicates(nums) << endl;

    return 0;
}
