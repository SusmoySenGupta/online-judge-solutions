/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1353B
	problem name: Two Arrays And Swaps
	problem link: https://codeforces.com/problemset/problem/1353/B

	Status: __Solved__
	Solved at: Jul/24/2021 10:29
*/

#include <iostream>
#include <algorithm>

#define INF (int)1e9
#define EPS 1e-9
#define MOD 1000000007ll
#define PI 3.14159
#define MAX 31

#define lli long long int

#define rep(i, a, n) for (int i=a; i<n; i++)
#define per(i, a, n) for (int i=n-1; i>=a; i--)

using namespace std;

void solve()
{
    int n, k, a[MAX], b[MAX], sum = 0;

    scanf("%d%d", &n, &k);

    rep(i, 0, n) scanf("%d", &a[i]);
    rep(i, 0, n) scanf("%d", &b[i]);

    sort(a, a + n);
    sort(b, b + n);

    rep(i, 0, k)
    {
        if(a[i] >= b[n-i-1]) break;

        else swap(a[i], b[n-i-1]);
    }

    rep(i, 0, n) sum += a[i];

    printf("%d\n", sum);
}

int main()
{
    int t;

    scanf("%d", &t);

    while (t--) solve();

    return 0;
}
