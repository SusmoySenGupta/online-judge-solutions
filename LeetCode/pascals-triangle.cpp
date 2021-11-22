/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Leetcode
	problem no: pascals-triangle
	problem name: 118. Pascal's Triangle
	problem link: https://leetcode.com/problems/pascals-triangle

	Tags: Array, Dynamic programming
    
    Technique, time & space complexity: 
    // Simple aproch - O(N^2)
    Runtime: 0 ms, faster than 100.00% of C++ online submissions for Pascal's Triangle.
    Memory Usage: 6.5 MB, less than 33.31% of C++ online submissions for Pascal's Triangle.
*/

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> pascalsTriangle;

    for (int i = 0; i < numRows; i++)
    {
        pascalsTriangle.push_back(vector<int>(i + 1, 1));

        for (int j = 1; j < i; j++)
            pascalsTriangle[i][j] = pascalsTriangle[i - 1][j - 1] + pascalsTriangle[i - 1][j];
    }

    return pascalsTriangle;
}

int main()
{
    return 0;
}
