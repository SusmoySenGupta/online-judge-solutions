/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1370A
	problem name: Maximum GCD
	problem link: https://codeforces.com/problemset/problem/1370/A

	Status: __Solved__
	Solved at: Jul/15/2021 10:13
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
    int n;

    scanf("%d", &n);

    n % 2 ? printf("%d\n", (n-1 )/ 2) : printf("%d\n", n/2);
}

int main()
{
    int t;

    scanf("%d", &t);

    while (t--)
        solve();

    return 0;
}
