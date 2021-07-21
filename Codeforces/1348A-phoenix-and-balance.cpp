/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1348A
	problem name: Phoenix and Balance
	problem link: https://codeforces.com/problemset/problem/1348/A

	Status: __Solved__
	Solved at: Jul/21/2021 10:45
*/

#include <iostream>
#include <math.h>

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
    int n, sum = 0;

    scanf("%d", &n);

    rep(i, 1, n / 2 + 1) sum += pow(2, i);

    printf("%d\n", sum);
}

int main()
{
    int t;

    scanf("%d", &t);

    while (t--) solve();

    return 0;
}
