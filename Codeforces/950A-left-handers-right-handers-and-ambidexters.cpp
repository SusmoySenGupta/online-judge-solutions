/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 950A
	problem name: Left-handers Right-handers and Ambidexters
	problem link: https://codeforces.com/problemset/problem/950/A

	Status: __Solved__
	Solved at: Jul/31/2021 10:15
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
	int l, r, a;
	
	scanf("%d%d%d", &l, &r, &a);
	
	int ne = min(a, abs(l-r));
	
	if(l < r) l += ne;
	else if(r < l) r += ne;
	
	a -= ne;
	
	printf("%d\n", (a/2 + min(l, r)) * 2);
}

int main()
{
	solve();

    return 0;
}