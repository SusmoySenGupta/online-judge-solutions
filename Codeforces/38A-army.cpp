/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 38A
	problem name: Army
	problem link: https://codeforces.com/problemset/problem/38/A

	Status: __Solved__
	Solved at: Jul/13/2021 12:35
*/

#include <iostream>

#define INF (int)1e9
#define EPS 1e-9
#define MOD 1000000007ll
#define PI 3.14159
#define MAX 102

#define lli long long int

#define rep(i, a, n) for (int i=a; i<n; i++)
#define per(i, a, n) for (int i=n-1; i>=a; i--)

using namespace std;

void solve()
{
    int n, arr[MAX], a, b, sum = 0;

    scanf("%d", &n);

    rep(i, 0, n - 1) scanf("%d", &arr[i]);

    scanf("%d%d", &a, &b);

    rep(i, a-1, b-1)
        sum += arr[i];

    printf("%d\n", sum);
}

int main()
{
	solve();

    return 0;
}
