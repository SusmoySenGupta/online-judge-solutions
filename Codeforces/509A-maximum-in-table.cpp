/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 509A
	problem name: Maximum in Table
	problem link: https://codeforces.com/problemset/problem/509/A

	Status: __Solved__
	Solved at: Jul/20/2021 14:41
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
    int n, arr[11][11]={1};

    scanf("%d", &n);

    rep(i, 0, n) arr[0][i] = 1;

    rep(i, 1, n)
    {
        arr[i][0] = 1;

        rep(j, 1, n)  arr[i][j] = arr[i][j-1] + arr[i - 1][j];
    }

    printf("%d\n", arr[n - 1][n-1]);
}

int main()
{
	solve();

    return 0;
}
