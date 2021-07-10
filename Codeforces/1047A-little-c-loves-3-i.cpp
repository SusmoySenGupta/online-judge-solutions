/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1047A
	problem name: Little C Loves 3 I
	problem link: https://codeforces.com/problemset/problem/1047/A

	Status: __Solved__
	Solved at: Jul/10/2021 12:03
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

    (n - 2) % 3 == 0 ? printf("%d 2 1\n", n-3) : printf("%d 1 1", n-2);
}

int main()
{
	solve();

    return 0;
}
