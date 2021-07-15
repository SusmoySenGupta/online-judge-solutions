/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 581A
	problem name: Vasya the Hipster
	problem link: https://codeforces.com/problemset/problem/581/A

	Status: __Solved__
	Solved at: Jul/15/2021 10:38
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
    int a, b;

    scanf("%d%d", &a, &b);

    printf("%d %d\n", min(a, b), abs(a-b) / 2);
}

int main()
{
	solve();

    return 0;
}
