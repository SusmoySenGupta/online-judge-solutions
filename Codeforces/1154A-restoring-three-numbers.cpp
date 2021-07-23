/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1154A
	problem name: Restoring Three Numbers
	problem link: https://codeforces.com/problemset/problem/1154/A

	Status: __Solved__
	Solved at: Jul/23/2021 12:35
*/

#include <iostream>

#define INF (int)1e9
#define EPS 1e-9
#define MOD 1000000007ll
#define PI 3.14159

#define lli long long int

#define rep(i, a, n) for (int i=a; i<n; i++)
#define per(i, a, n) for (int i=n-1; i>=a; i--)

using namespace std;

void solve()
{
    int arr[5], max_val = -1;

    rep(i, 0, 4)
    {
        scanf("%d", &arr[i]);

        max_val = max(arr[i], max_val);
    }

    rep(i, 0, 4)
    {
        if(max_val-arr[i] != 0)
            printf("%d ", max_val-arr[i]);
    }
    printf("\n");
}

int main()
{
	solve();

    return 0;
}
