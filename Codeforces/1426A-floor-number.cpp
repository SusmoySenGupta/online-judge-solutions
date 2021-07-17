/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1426A
	problem name: Floor Number
	problem link: https://codeforces.com/problemset/problem/1426/A

	Status: __Solved__
	Solved at: Jul/17/2021 10:56
*/

#include <iostream>
#include <cmath>

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
    int n, x;

    scanf("%d%d", &n, &x);

    if(n < 3)
        printf("1\n");
    else
        printf("%d\n", ((n-3)/x) + 2);
}

int main()
{
    int t;

    scanf("%d", &t);

    while(t--)
        solve();

    return 0;
}