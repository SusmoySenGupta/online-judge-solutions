/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Leetcode
	problem no: plus-one
	problem name: 66. Plus One
	problem link: https://leetcode.com/problems/plus-one

	Tags: Array
    
    Technique, time & space complexity: 
    // Simple approach - O(n + log(n))
    Runtime: 2 ms, faster than 49.97% of C++ online submissions for Plus One.
    Memory Usage: 8.7 MB, less than 60.46% of C++ online submissions for Plus One.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> plusOne(vector<int> &digits)
{
    vector<int> ans;
    int carry = 1, sum;

    for (int i = digits.size() - 1; i >= 0; i--)
    {
        sum = digits[i] + carry;

        if (sum > 9)
        {
            ans.push_back(0);
            carry = 1;
        }
        else
        {
            ans.push_back(sum);
            carry = 0;
        }
    }

    if (carry)
        ans.push_back(1);

    reverse(ans.begin(), ans.end());

    return ans;
}

int main()
{
    vector<int> ans, digits({9});

    ans = plusOne(digits);

    for (auto a : ans)
    {
        cout << a << " ";
    }

    return 0;
}
