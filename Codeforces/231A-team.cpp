/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 231A
	problem name: Team
	problem link: https://codeforces.com/contest/231/problem/A

	Status: __Re-solved w/ cpp17__
	Solved at: Jul/02/2021 20:58
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
	int t, x, count = 0;

	cin >> t;

	while(t--)
	{
		int n = 3, sum = 0;

		while(n--)
		{
			cin >> x;

			sum += x;
		}

		if(sum >= 2)
			count++;
	}

	cout << count << endl;
}

int main()
{
	solve();

    return 0;
}
