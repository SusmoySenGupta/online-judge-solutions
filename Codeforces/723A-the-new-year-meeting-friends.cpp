/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 723A
	problem name: The New Year: Meeting Friends
	problem link: https://codeforces.com/problemset/problem/723/A

	Status: __Solved__
	Solved at: Jul/22/2021 11:58
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
    int arr[5];

    rep(i, 0, 3) scanf("%d", &arr[i]);

    sort(arr, arr + 3);

    printf("%d\n", (arr[1] - arr[0]) + (arr[2] - arr[1]));
}

int main()
{
	solve();

    return 0;
}