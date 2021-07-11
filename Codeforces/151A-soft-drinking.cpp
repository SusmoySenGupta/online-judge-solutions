/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 151
	problem name: Soft Drinking
	problem link: https://codeforces.com/problemset/problem/151/A

	Status: __Solved__
	Solved at: Jul/12/2021 01:07
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
    int n, k, l, c, d, p, nl, np;

    scanf("%d%d%d%d%d%d%d%d", &n, &k, &l, &c, &d, &p, &nl, &np);

    int x = min( (k*l)/nl, c * d );
    int y = min( p/np, x );

    printf("%d\n", y / n);
}

int main()
{
	solve();

    return 0;
}
