/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1520B
	problem name: Ordinary Numbers
	problem link: https://codeforces.com/problemset/problem/1520/B

	Status: __Solved__
	Solved at: Jul/23/2021 22:58
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

int makeNumber(int n)
{
    int num = 0;

    rep(i, 0, n) num += pow(10, i);

    return num;
}

void solve()
{
    int n;

    scanf("%d", &n);

    int digit = log10(n) + 1;

    printf("%d\n", 9*(digit-1) + n/makeNumber(digit));
}

int main()
{
    int t;

    scanf("%d", &t);

    while (t--) solve();

    return 0;
}
