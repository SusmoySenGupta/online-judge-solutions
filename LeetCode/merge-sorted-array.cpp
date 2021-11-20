/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Leetcode
	problem no: merge-sorted-array 
	problem name: Merge Sorted Array
	problem link: https://leetcode.com/problems/merge-sorted-array

	Tags: Array, Two Pointers, Sorting
    
    Technique, time & space complexity: 
    // Sorting - O(n + nlogn)
    Runtime: 0 ms, faster than 100.00% of C++ online submissions for Merge Sorted Array.
    Memory Usage: 9.1 MB, less than 71.43% of C++ online submissions for Merge Sorted Array.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    for (int i = 0, j = m; i < n; i++, j++)
        nums1[j] = nums2[i];

    sort(nums1.begin(), nums1.end());
}

int main()
{
    vector<int> nums1{1,2,3,0,0,0}, nums2{2,5,6};
    int m = 3, n = 3;
    
    merge(nums1, m, nums2, n);

    for(auto i : nums1)
    {
        cout << i << " ";
    }

    return 0;
}
