/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 148A
	problem name: Insomnia cure
	problem link: https://codeforces.com/problemset/problem/148/A

	Status: __Solved__
	Solved at: Jul/07/2021 20:14
*/

#include <iostream>

#define INF (int)1e9
#define MAX 100005
#define EPS 1e-9
#define MOD 1000000007ll
#define PI 3.14159

#define lli long long int

#define rep(i, a, n) for (int i=a; i<n; i++)
#define per(i, a, n) for (int i=n-1; i>=a; i--)

using namespace std;

void solve()
{
    int k, l, m, n, d, count = 0;

    scanf("%d%d%d%d%d", &k, &l, &m, &n, &d);

    rep(i, 1, d+1)
        if(i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
            count++;

    printf("%d\n", count);
}

int main()
{
	solve();

    return 0;
}