/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 732A-buy-a-shovel
	problem name: Buy a Shovel
	problem link: https://codeforces.com/problemset/problem/732/A

	Status: __Solved__
	Solved at: Jul/06/2021 01:46
*/

#include <iostream>

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
	int k, r;
	
	scanf("%d%d", &k, &r);
	
	for(int i = 1; ;i++)
	{
		if( (k * i - r) % 10 == 0 || (k * i) % 10 == 0 || k == r)
		{
			printf("%d\n", i);
			break;
		}
	}
}

int main()
{
	solve();

    return 0;
}

