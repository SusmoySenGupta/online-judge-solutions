/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1473A
	problem name: Replacing Elements
	problem link: https://codeforces.com/problemset/problem/1473/A

	Status: __Solved__
	Solved at: Aug/12/2021 11:47
*/

#include <iostream>
#include <algorithm>

#define INF (int)1e9
#define EPS 1e-9
#define MOD 1000000007ll
#define PI 3.14159
#define MAX 1003

#define lli long long int

#define rep(i, a, n) for (int i=a; i<n; i++)
#define per(i, a, n) for (int i=n-1; i>=a; i--)

using namespace std;

void solve()
{
    int n, d, arr[MAX];

    scanf("%d %d", &n, &d);

    rep(i, 0, n) scanf("%d", &arr[i]);

    sort(arr, arr + n);

    arr[n-1] <= d || arr[0] + arr[1] <= d ? printf("YES\n") : printf("NO\n");
}

int main()
{
    int t;

    scanf("%d", &t);

    while (t--) solve();

    return 0;
}
