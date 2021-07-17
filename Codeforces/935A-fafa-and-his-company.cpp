/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 935A
	problem name: Fafa and his Company
	problem link: https://codeforces.com/problemset/problem/935/A

	Status: __Solved__
	Solved at: Jul/17/2021 11:18
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
    int n, count = 0;

    scanf("%d", &n);

    rep(i, 1, (n/2) + 1) if(n%i == 0) count++;

    printf("%d\n", count);
}

int main()
{
	solve();

    return 0;
}
