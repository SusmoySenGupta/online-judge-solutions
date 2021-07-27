/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1462A
	problem name: Favorite Sequence
	problem link: https://codeforces.com/problemset/problem/1462/A

	Status: ____
	Solved at: __
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
    int n, arr[302], ans[302];

    scanf("%d", &n);

    rep(i, 0, n) scanf("%d", &arr[i]);

    int start = 0, end = n-1;

    rep(i, 0, n) ans[i] = i%2 ? arr[end--] : arr[start++];

    rep(i, 0, n) printf("%d ", ans[i]);

    printf("\n");
}

int main()
{
    int t;

    scanf("%d", &t);

	while(t--) solve();

    return 0;
}
