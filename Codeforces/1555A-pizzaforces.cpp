/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no:
	problem name: PizzaForces
	problem link: https://codeforces.com/problemset/problem/1555/A

	Status: __Solved__
	Solved at: Aug/17/2021 23:45
*/

#include <iostream>

#define INF (int)1e9
#define EPS 1e-9
#define MOD 1000000007ll
#define PI 3.14159
#define MAX 1003

#define lli long long int

#define rep(i, a, n) for (int i=a; i<n; i++)
#define per(i, a, n) for (int i=n-1; i>=a; i--)

using namespace std;

void solve()
{
    lli n;

    cin >> n;

    cout << max(6LL, n+1) / 2 * 5 << "\n";
}

int main()
{
    int t;

    scanf("%d", &t);

    while(t--) solve();

    return 0;
}
