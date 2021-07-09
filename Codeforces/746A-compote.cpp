/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 746A
	problem name: Compote
	problem link: https://codeforces.com/problemset/problem/746/A

	Status: __Solved__
	Solved at: Jul/09/2021 21:50
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
    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);

   int x = min(a, b/2);
   int y = min(x, c/4);

   printf("%d\n", y * 7);
}

int main()
{
	solve();

    return 0;
}
