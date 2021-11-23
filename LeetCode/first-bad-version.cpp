/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Leetcode
	problem no: first-bad-version
	problem name: 278. First Bad Version
	problem link: https://leetcode.com/problems/first-bad-version

	Tags: Array
    
    Technique, time & space complexity: 
    // Lower bound
    Time complexity: O(log n)
    Space complexity: O(1)
    Runtime: 0 ms, faster than 100.00% of C++ online submissions for First Bad Version.
    Memory Usage: 5.8 MB, less than 66.61% of C++ online submissions for First Bad Version.
*/

#include <iostream>
using namespace std;

int firstBadVersion(int n)
{
    if (n == 1)
        return n;

    int L = 0, R = n, mid;

    while (L <= R)
    {
        mid = L + (R - L) / 2;

        if (isBadVersion(mid))
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
