/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1557A
	problem name: Ezzat and Two Subsequences
	problem link: https://codeforces.com/problemset/problem/1557/A

	Status: __Solved__
	Solved at: Aug/11/2021 10:25
*/

#include <iostream>
#include <algorithm>

#define INF (int)1e9
#define EPS 1e-9
#define MOD 1000000007ll
#define PI 3.14159
#define MAX 100005

#define lli long long int

#define rep(i, a, n) for (int i=a; i<n; i++)
#define per(i, a, n) for (int i=n-1; i>=a; i--)

using namespace std;

void solve()
{
    int n, arr[MAX];

    scanf("%d", &n);

    rep(i, 0, n) scanf("%d", &arr[i]);

    sort(arr, arr + n);

    double sum = 0;
    rep(i, 0, n-1) sum += (double) arr[i];

    printf("%lf\n", (sum/(1.0*n - 1)) + (1.0 * arr[n-1]));
}

int main()
{   
    int t;

    scanf("%d", &t);

    while (t--) solve();

    return 0;
}
