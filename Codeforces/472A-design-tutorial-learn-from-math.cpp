/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 472A
	problem name: Design Tutorial: Learn from Math
	problem link: https://codeforces.com/problemset/problem/472/A

	Status: __Solved__
	Solved at: Jul/23/2021 12:21
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
    int n, di;

    scanf("%d", &n);

    if(n%2)
        printf("%d %d\n", 9, n - 9);
    else
        printf("%d %d\n", 8, n - 8);
}

int main()
{
	solve();

    return 0;
}
