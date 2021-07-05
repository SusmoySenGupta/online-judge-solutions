/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1475B
	problem name: New Year's Number
	problem link: https://codeforces.com/problemset/problem/1475/B

	Status: ____
	Solved at: __
*/

#include <iostream>
#include <cstring>

#define INF  (int)1e9
#define EPS   1e-9
#define MOD 1000000007ll
#define PI 3.14159

#define lli long long int

#define rep(i, a, n) for (int i=a; i<n; i++)
#define per(i, a, n) for (int i=n-1; i>=a; i--)

using namespace std;

void solve()
{
	int t, n;
	
	scanf("%d", &t);
	
	while(t--)
	{
		scanf("%d", &n);

		if(n < 2020)
			printf("NO\n");
		else if(n % 2020 == 0 || n % 2021 == 0 || (n-2021) % 2020 == 0)
			printf("YES\n");
		else
			printf("NO\n");
	}
}

int main()
{
	solve();

    return 0;
}
