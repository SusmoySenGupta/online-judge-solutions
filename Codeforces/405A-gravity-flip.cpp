/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 405A
	problem name: Gravity Flip
	problem link: https://codeforces.com/problemset/problem/405/A

	Status: __Solved__
	Solved at: Aug/03/2021 10:12
*/

#include <iostream>
#include <algorithm>

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
    int n, arr[102];

    scanf("%d", &n);
    
    rep(i, 0, n) scanf("%d", &arr[i]);

    sort(arr, arr + n);

    rep(i, 0, n) printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
	solve();

    return 0;
}
