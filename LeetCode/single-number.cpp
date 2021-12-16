/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Leetcode
	problem no: single-number
	problem name: 136. Single Number
	problem link: https://leetcode.com/problems/single-number

	Tags: Array, Bit manipulation
    
    Technique, time & space complexity: 
*/

#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int> &nums)
{
    int uniqueNumber = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        uniqueNumber ^= nums[i];
    }

    return uniqueNumber;
}

int main()
{
    vector<int> nums({4, 1, 2, 1, 2});

    cout << "OUTPUT: " << singleNumber(nums) << "\n";

    return 0;
}
