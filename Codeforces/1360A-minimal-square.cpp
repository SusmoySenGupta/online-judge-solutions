/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1360A
	problem name: Minimal Square
	problem link: https://codeforces.com/problemset/problem/1360/A

	Status: __Solved__
	Solved at: Jul/21/2021 11:41
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
    int n, m, side;

    scanf("%d%d", &n, &m);

    side = min( max(n*2, m), max(n, m*2) );

    printf("%d\n", side*side);
}

int main()
{
    int t;

    scanf("%d", &t);

    while (t--) solve();

    return 0;
}
