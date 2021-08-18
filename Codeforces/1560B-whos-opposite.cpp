/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no:
	problem name: Who's Opposite
	problem link: 

	Status: __Solved__
	Solved at: Aug/19/2021 01:14
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
    int a, b, c;
    
    scanf("%d %d %d", &a, &b, &c);

    int n = 2 * abs(a-b);

    if(a<=n/2 == b<=n/2) { printf("-1\n"); return; }

    if(c > n) { printf("-1\n"); return; }

    else printf("%d\n", c <= n/2 ? c + n/2 : c - n/2);
}

int main()
{
    int t;

    scanf("%d", &t);

    while (t--) solve();

    return 0;
}
