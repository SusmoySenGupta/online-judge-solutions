/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 758A
	problem name: Holiday Of Equality
	problem link: https://codeforces.com/problemset/problem/758/A

	Status: __Solved__
	Solved at: Jul/22/2021 11:37
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
    int n, arr[102], max = -1, count = 0;

    scanf("%d", &n);

    rep(i, 0, n)
    {
        scanf("%d", &arr[i]);

        if(arr[i] > max) max = arr[i];
    }

    rep(i, 0, n) count += max - arr[i];

    printf("%d\n", count);
}

int main()
{
	solve();

    return 0;
}
