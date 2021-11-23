/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Leetcode
	problem no: remove-element
	problem name: 27. Remove Element
	problem link: https://leetcode.com/problems/remove-element

	Tags: Array
    
    Technique, time & space complexity: 
    Approach 1: Two Pointers - when elements to remove are rare 
    Time complexity: O(N)
    Space complexity: O(1)
    Runtime: 0 ms, faster than 100.00% of C++ online submissions for Remove Element.
    Memory Usage: 8.9 MB, less than 33.43% of C++ online submissions for Remove Element.
*/

#include <iostream>
#include <vector>
using namespace std;

// O(N)
int removeElement(vector<int> &nums, int val)
{
    int i = 0, length = nums.size();

    while (i < length)
    {
        if (nums[i] == val)
        {
            swap(nums[i], nums[length - 1]);
            length--;
        }
        else
            i++;
    }

    return length;
}

int main()
{

    return 0;
}
