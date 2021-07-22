/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 490A
	problem name: Team Olympiad
	problem link: https://codeforces.com/problemset/problem/490/A

	Status: __Solved__
	Solved at: Jul/22/2021 11:16
*/

#include <iostream>

#define INF (int)1e9
#define EPS 1e-9
#define MOD 1000000007ll
#define PI 3.14159
#define MAX 5003

#define lli long long int

#define rep(i, a, n) for (int i=a; i<n; i++)
#define per(i, a, n) for (int i=n-1; i>=a; i--)

using namespace std;

void solve()
{
    int n, x, a[MAX], b[MAX], c[MAX], d, e, f, freq[5] = {0}, min_val;

    scanf("%d", &n);

    d = e = f = 0;

    rep(i, 0, n) 
    {
        scanf("%d", &x);
        freq[x]++;

        if(x == 1)  a[d++] = i;
        else if(x == 2) b[e++] = i;
        else c[f++] = i;
    }

    min_val = min(min(freq[1], freq[2]), freq[3]);

    printf("%d\n", min_val);

    rep(i, 0, min_val) printf("%d %d %d\n", a[i]+1, b[i]+1, c[i]+1);
}

int main()
{
	solve();

    return 0;
}
