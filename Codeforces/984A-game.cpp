/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 984A
	problem name: Game
	problem link: https://codeforces.com/problemset/problem/984/A

	Status: __Solved__
	Solved at: Jul/09/2021 22:01
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
    int n, arr[MAX];

    scanf("%d", &n);

    rep(i, 0, n)
        scanf("%d", &arr[i]);

    sort(arr, arr + n);

    int mid = n % 2 ? n / 2 : n / 2 - 1;

    printf("%d\n", arr[mid]);
}

int main()
{
	solve();

    return 0;
}
