/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 34B
	problem name: Sale
	problem link: https://codeforces.com/problemset/problem/34/B

	Status: __Solved__
	Solved at: Aug/14/2021 10:44
*/

#include <iostream>
#include <algorithm>

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
    int n, m, arr[MAX];

    scanf("%d%d", &n, &m);

    rep(i, 0, n) scanf("%d", &arr[i]);

    sort(arr, arr + n);

    int sum = 0;

    rep(i, 0, m) { if(arr[i] < 0) sum += arr[i]; }

    printf("%d\n", sum * -1);
}

int main()
{
	solve();

    return 0;
}
