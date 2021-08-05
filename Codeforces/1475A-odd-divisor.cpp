/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1475A
	problem name: Odd Divisor
	problem link: https://codeforces.com/problemset/problem/1475/A

	Status: __Solved__
	Solved at: Aug/05/2021 11:36
*/

#include <iostream>
#include <math.h>

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
    lli n;

    cin >> n;

    rep(i, 1, 63)
    {
        if(n == (lli)pow(2, i))
        {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main()
{
    int t;

    cin >> t;
    
    while (t--) solve();

    return 0;
}
