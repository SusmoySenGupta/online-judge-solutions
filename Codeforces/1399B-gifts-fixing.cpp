/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1399B
	problem name: Gifts Fixing
	problem link: https://codeforces.com/problemset/problem/1399/B

	Status: __Solved__
	Solved at: Jul/24/2021 11:29
*/

#include <iostream>

#define INF (int)1e9
#define EPS 1e-9
#define MOD 1000000007ll
#define PI 3.14159
#define MAX 51

#define lli long long int

#define rep(i, a, n) for (int i=a; i<n; i++)
#define per(i, a, n) for (int i=n-1; i>=a; i--)

using namespace std;

void solve()
{
    lli n, a[MAX], b[MAX], min_a = INF, min_b = INF, max_diff = 0, total = 0;

    cin >> n;

    rep(i, 0, n) 
    {
        cin >> a[i];
        min_a = min(a[i], min_a);
    }
    rep(i, 0, n) 
    {
        cin >> b[i];
        min_b = min(b[i], min_b);
    }

    rep(i, 0, n) total += max(a[i]-min_a, b[i] - min_b);
    
    cout << total << "\n";
}

int main()
{
    int t;

    scanf("%d", &t);

    while (t--) solve();

    return 0;
}
