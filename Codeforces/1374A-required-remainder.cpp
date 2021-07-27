/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1374A
	problem name: Required Remainder
	problem link: https://codeforces.com/problemset/problem/1374/A

	Status: __Solved__
	Solved at: Jul/27/2021 20:32
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
    lli x, y, n;

    cin >> x >> y >> n;

    if(n - (n%x) + y <= n) cout << n - (n%x) + y << "\n";

    else cout << n - (n%x) - (x - y) << "\n";
}

int main()
{
    int t;

    scanf("%d", &t);
	
    while(t--) solve();

    return 0;
}
