/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 268A
	problem name: Games
	problem link: https://codeforces.com/problemset/problem/268/A

	Status: __Solved__
	Solved at: Jul/24/2021 12:44
*/

#include <iostream>

#define INF (int)1e9
#define EPS 1e-9
#define MOD 1000000007ll
#define PI 3.14159
#define MAX 31

#define lli long long int

#define rep(i, a, n) for (int i=a; i<n; i++)
#define per(i, a, n) for (int i=n-1; i>=a; i--)

using namespace std;

void solve()
{
    int n, a[MAX], b[MAX], count = 0;

    scanf("%d", &n);

    rep(i, 0, n) scanf("%d%d", &a[i], &b[i]);

    rep(i, 0, n)
        rep(j, 0, n) 
            if(a[i] == b[j]) 
                count++;

    printf("%d\n", count);
}

int main()
{
	solve();

    return 0;
}
