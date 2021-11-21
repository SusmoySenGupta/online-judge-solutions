/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Leetcode
	problem no: 2078. two-furthest-houses-with-different-colors
	problem name: 2078. Two Furthest Houses With Different Colors
	problem link: https://leetcode.com/problems/two-furthest-houses-with-different-colors

	Tags: Array
    
    Technique, time & space complexity: 
    // O(N^2)
    Runtime: 0 ms, faster than 100.00% of C++ online submissions for Two Furthest Houses With Different Colors.
    Memory Usage: 8.9 MB, less than 54.55% of C++ online submissions for Two Furthest Houses With Different Colors.
*/

#include <iostream>
#include <vector>
using namespace std;

int maxDistance(vector<int> &colors)
{
    int MAX = -1;

    for (int i = 0; i < colors.size(); i++)
        for (int j = i + 1; j < colors.size(); j++)
            if (colors[i] != colors[j])
                MAX = max(MAX, abs(i - j));

    return MAX;
}

int main()
{
    vector<int> colors{1, 1, 1, 6, 1, 1, 1};

    cout << "Output: " << maxDistance(colors) << endl;

    return 0;
}
