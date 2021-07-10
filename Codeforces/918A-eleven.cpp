/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 918A
	problem name: Eleven
	problem link: https://codeforces.com/problemset/problem/918/A

	Status: __Solved__
	Solved at: Jul/10/2021 17:08
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

int fibos[20] = {1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987};

void solve()
{
    int n;

    scanf("%d", &n);

    rep(i, 1, n+1)
        binary_search(fibos, fibos + 15, i) ? printf("O") : printf("o");

    printf("\n");
}

int main()
{
	solve();

    return 0;
}
