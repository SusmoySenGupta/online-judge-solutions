/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 9A
	problem name: Die Roll
	problem link: https://codeforces.com/problemset/problem/9/A

	Status: __Accepted__
	Solved at: Nov/14/2021 21:50
*/

#include <bits/stdc++.h>

using namespace std;

#define INF (int)1e9
#define EPS 1e-9
#define MOD 1000000007ll
#define PI 3.14159
#define MAX 1003

#define ll long long int

void solve()
{
    int a, b;

    scanf("%d %d", &a, &b);

    a = 6 - max(a, b) + 1;
    b = __gcd(6, a);

    printf("%d/%d\n", a/b, 6/b);
}

int main()
{
    solve();

    return 0;
}
