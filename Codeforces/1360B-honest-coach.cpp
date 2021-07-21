/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1360B
	problem name: Honest Coach
	problem link: https://codeforces.com/problemset/problem/1360/B

	Status: __Solved__
	Solved at: Jul/21/2021 12:14
*/

#include <iostream>
#include <algorithm>

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
    int n, arr[1003];

    scanf("%d", &n);

    rep(i, 0, n) scanf("%d", &arr[i]);

    sort(arr, arr + n);

    int min = arr[1] - arr[0];

    rep(i, 1, n-1) 
        if(arr[i+1] - arr[i] < min) min = arr[i + 1] - arr[i];

    printf("%d\n", min);
}

int main()
{
    int t;

    scanf("%d", &t);

    while (t--) solve();

    return 0;
}
