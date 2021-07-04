/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 467A-george-and-accommodation
	problem name: George and Accommodation
	problem link: https://codeforces.com/problemset/problem/467/A

	Status: __Solved__
	Solved at: Jul/04/2021 18:08
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
	int t, x, y, count = 0;
	
	scanf("%d", &t);
	
	while(t--)
	{
		scanf("%d%d", &x, &y);
		
		if(y - x >= 2)
			count++;
	}
	
	printf("%d\n", count);
}

int main()
{
	solve();

    return 0;
}
