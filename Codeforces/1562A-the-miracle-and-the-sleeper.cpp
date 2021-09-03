/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1562A
	problem name: The Miracle and the Sleeper
	problem link: https://codeforces.com/problemset/problem/1562/A

	Status: __Solved__
	Solved at: Sep/03/2021 11:37
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
    int l, r;
    
    scanf("%d%d", &l, &r);

    if(r < l*2) printf("%d\n", r-l);
    else printf("%d\n", (r-1) / 2);
}

int main()
{
    int t;

    scanf("%d", &t);

    while(t--) solve();

    return 0;
}
