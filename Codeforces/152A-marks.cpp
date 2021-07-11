/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 152A
	problem name: Marks
	problem link: https://codeforces.com/problemset/problem/152/A

	Status: __Solved__
	Solved at: Jul/12/2021 00:42
*/

#include <iostream>
#include <string>

#define INF (int)1e9
#define EPS 1e-9
#define MOD 1000000007ll
#define PI 3.14159
#define MAX 102

#define lli long long int

#define rep(i, a, n) for (int i=a; i<n; i++)
#define per(i, a, n) for (int i=n-1; i>=a; i--)

using namespace std;

void solve()
{
    int t, n, count = 0;
    string nums[MAX];
    bool high[MAX]= {false};

    scanf("%d%d", &t, &n);

    rep(i, 0, t) {
        char temp[MAX];
        scanf("%s", temp);
        nums[i] = temp;
    }
    
    rep(col, 0, n)
    {
        int max = -1;

        rep(row, 0, t) // getting the max score for a column
            if(nums[row][col] - '0' > max)
                max = nums[row][col] - '0';

        rep(row, 0, t) // keeping track if the row has highest score
            if(nums[row][col] - '0' == max)
                high[row] = true;
    }

    rep(i, 0, t) if(high[i]) count++;

    printf("%d\n", count);
}

int main()
{
	solve();

    return 0;
}
