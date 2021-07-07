/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 677A-vanya-and-fence
	problem name: Vanya and Fence
	problem link: https://codeforces.com/problemset/problem/677/A

	Status: __Solved__
	Solved at: Jul/08/2021 00:11
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
	int n, h, x, count = 0;
	
	scanf("%d%d", &n, &h);
	
	while(n--)
	{
		scanf("%d", &x);

		if(x <= h)
			count++;
		else
			count += 2;
	}
	
	printf("%d\n", count);
}

int main()
{
	solve();

    return 0;
}
