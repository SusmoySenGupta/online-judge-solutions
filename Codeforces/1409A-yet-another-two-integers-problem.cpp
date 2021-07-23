/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1409A
	problem name: Yet Another Two Integers Problem
	problem link: https://codeforces.com/problemset/problem/1409/A

	Status: __Solved__
	Solved at: Jul/23/2021 13:00
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
    int a, b, c;

    scanf("%d %d", &a, &b);

    c = abs(a - b);
    
    if(c % 10 == 0)
        printf("%d\n", c/10);
    else
        printf("%d\n", c / 10 + 1);
}

int main()
{
    int t;

    scanf("%d", &t);

    while (t--) solve();

    return 0;
}
