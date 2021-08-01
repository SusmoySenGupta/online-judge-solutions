/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1285A
	problem name: Mezo Playing Zoma
	problem link: https://codeforces.com/contest/1285/problem/A

	Status: __Solved__
	Solved at: Aug/01/2021 10:51
*/

#include <iostream>
#include <string.h>

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
    int n, l=0, r=0;
    char ch[100005];

    scanf("%d", &n);
    scanf("%s", ch);

    int len = strlen(ch);

    rep(i, 0, len) ch[i] == 'L' ? l++ : r++;

    printf("%d\n", l + r +1);
}

int main()
{
	solve();

    return 0;
}
