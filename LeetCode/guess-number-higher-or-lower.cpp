/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Leetcode
	problem no: guess-number-higher-or-lower
	problem name: 374. Guess Number Higher or Lower
	problem link: https://leetcode.com/problems/guess-number-higher-or-lower

	Tags: Array, Binary Search
    
    Technique, time & space complexity: 
    Binary Search
    Time complexity: O(log n)
    Space complexity: O(1)
    Runtime: 0 ms, faster than 100.00% of C++ online submissions for Guess Number Higher or Lower.
    Memory Usage: 5.9 MB, less than 23.27% of C++ online submissions for Guess Number Higher or Lower.
*/

#include <iostream>
using namespace std;

int guessNumber(int n)
{
    int left = 1, right = n, mid = 1;

    while (left <= right)
    {
        mid = left + (right - left) / 2;

        if (guess(mid) == 0)
            return mid;
        else if (guess(mid) == -1)
            right = mid - 1;
        else
            left = mid + 1;
    }

    return mid;
}

int main()
{

    return 0;
}
