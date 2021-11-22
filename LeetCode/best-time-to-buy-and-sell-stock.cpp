/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Leetcode
	problem no: 121. best-time-to-buy-and-sell-stock
	problem name: 121. Best Time to Buy and Sell Stock
	problem link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock

	Tags: 
    
    Technique, time & space complexity: 
    // Single pass - O(N)
    Runtime: 120 ms, faster than 55.05% of C++ online submissions for Best Time to Buy and Sell Stock.
    Memory Usage: 93.4 MB, less than 52.39% of C++ online submissions for Best Time to Buy and Sell Stock.

    // Kadane's algorithm
    Runtime: 128 ms, faster than 36.94% of C++ online submissions for Best Time to Buy and Sell Stock.
    Memory Usage: 93.4 MB, less than 13.49% of C++ online submissions for Best Time to Buy and Sell Stock.
*/

#include <iostream>
#include <vector>
using namespace std;

// Single pass
int maxProfit(vector<int> &prices)
{
    int minPrice = prices[0], maxProfit = 0;

    for (int i = 1; i < prices.size(); i++)
    {
        if (prices[i] > minPrice)
            maxProfit = max(maxProfit, prices[i] - minPrice);

        minPrice = min(minPrice, prices[i]);
    }

    return maxProfit;
}

// Kadane's Algorithm
int maxProfit2(vector<int> &prices)
{
    int sum = 0, maxProfit = 0;

    for (int i = 0; i < prices.size() - 1; i++)
    {
        sum += prices[i + 1] - prices[i];

        if (sum < 0)
            sum = 0;

        maxProfit = max(maxProfit, sum);
    }

    return maxProfit;
}

int main()
{
    vector<int> prices{7, 1, 5, 3, 6, 4};

    cout << "Output: " << maxProfit(prices) << endl;
    cout << "Output with Kadane's algorithm: " << maxProfit2(prices) << endl;

    return 0;
}
