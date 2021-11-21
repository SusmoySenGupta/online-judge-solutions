/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Leetcode
	problem no: intersection-of-two-arrays-ii
	problem name: Intersection Of Two Arrays II
	problem link: https://leetcode.com/problems/intersection-of-two-arrays-ii

	Tags: Array, Hashtable, Two pointers
    
    Technique, time & space complexity: 
    // O(N + M)
    Runtime: 8 ms, faster than 43.93% of C++ online submissions for Intersection of Two Arrays II.
    Memory Usage: 10.4 MB, less than 51.74% of C++ online submissions for Intersection of Two Arrays II.
*/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> ans;
    unordered_map<int, int> check;

    for (auto i : nums1)
        check[i]++;

    for (auto i : nums2)
    {
        if (check.find(i) != check.end() && check[i] > 0)
        {
            ans.push_back(i);
            check[i]--;
        }
    }

    return ans;
}

int main()
{
    vector<int> nums1{1,2,2,1}, nums2{2,2}, ans;

    ans = intersect(nums1, nums2);

    for(auto i : ans)
        cout << i << " ";

    return 0;
}
