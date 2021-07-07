/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 705A
	problem name: Hulk
	problem link: https://codeforces.com/problemset/problem/705/A

	Status: __Solved__
	Solved at: Jul/08/2021 00:33
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
	int n, i = 1;
	
	scanf("%d", &n);
	
	while(i < n)
	{
		if(i % 2)
			cout << "I hate that ";
		else
			cout << "I love that ";

		i++;
	}
	
	if(i % 2)
		cout << "I hate it" << endl;
	else
		cout << "I love it" << endl;
}

int main()
{
	solve();

    return 0;
}

