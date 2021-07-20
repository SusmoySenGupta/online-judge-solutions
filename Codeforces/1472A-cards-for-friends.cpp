/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1472A
	problem name: Cards for Friends
	problem link: https://codeforces.com/problemset/problem/1472/A

	Status: __Solved__
	Solved at: Jul/21/2021 01:33
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
    int w, h, n, total = 1;

    scanf("%d%d%d", &w, &h, &n);

    while(w%2 == 0) {
        w /= 2;  total *= 2;
    }

    while(h%2 == 0) {
        h /= 2; total *= 2;
    }

    printf((n <= total ? "YES\n" : "NO\n") );
}

int main()
{
    int t;

    scanf("%d", &t);

    while (t--) solve();

    return 0;
}
