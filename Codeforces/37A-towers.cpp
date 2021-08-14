/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 37A
	problem name: Towers
	problem link: https://codeforces.com/problemset/problem/37/A

	Status: __Solved__
	Solved at: Aug/14/2021 12:16
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
    int n, arr[MAX] = {0}, x;

    scanf("%d", &n);

    rep(i, 0, n) { scanf("%d", &x); arr[x]++; }

    int count = 0, max_val = -1;

    rep(i, 0, MAX)
    {
        if(arr[i]) count++;

        max_val = max(max_val, arr[i]);
    }


    printf("%d %d\n", max_val, count);
}

int main()
{
	solve();

    return 0;
}
