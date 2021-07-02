/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 749A
	problem name: Bachgold Problem
	problem link: https://codeforces.com/problemset/problem/749/A

	Status: __Solved__
	Solved at: Jul/02/2021 19:50
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
	int n;
	
	cin >> n;
	
	cout << n / 2 << endl;
	
	if(n % 2)
	{
		rep(i, 0, (n / 2) - 1)
			cout << 2 << " ";
			
		cout << 3 << endl;
	}
	
	else
	{
		rep(i, 0, n / 2)
			cout << 2 << " ";
		
		cout << endl;
	}
}

int main()
{
	solve();

    return 0;
}
