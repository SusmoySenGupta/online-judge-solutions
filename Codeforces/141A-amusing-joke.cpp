/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 141A
	problem name: Amusing Joke
	problem link: https://codeforces.com/problemset/problem/141/A

	Status: __Solved__
	Solved at: Jul/12/2021 01:57
*/

#include <iostream>
#include <string.h>
#include <algorithm>

#define INF (int)1e9
#define EPS 1e-9
#define MOD 1000000007ll
#define PI 3.14159
#define MAX 202

#define lli long long int

#define rep(i, a, n) for (int i=a; i<n; i++)
#define per(i, a, n) for (int i=n-1; i>=a; i--)

using namespace std;

void solve()
{
    char a[MAX], b[MAX], c[MAX];

    scanf("%s%s%s", a, b, c);

    strcat(a, b);

    sort(a, a + strlen(a));
    sort(c, c + strlen(c));

    strcmp(a, c) == 0 ? printf("YES\n") : printf("NO\n");
}

int main()
{
	solve();

    return 0;
}
