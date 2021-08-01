/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1096A
	problem name: Find Divisible
	problem link: https://codeforces.com/contest/1096/problem/A

	Status: __Solved__
	Solved at: Jul/31/2021 23:59
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
    int l, r;
    
    scanf("%d %d", &l, &r);

    printf("%d %d\n", l, l*2);

}

int main()
{
    int t;

    scanf("%d", &t);

    while (t--) solve();

    return 0;
}
