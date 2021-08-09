/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 342A
	problem name: Xenia and Divisors
	problem link: https://codeforces.com/problemset/problem/342/A

	Status: __Solved__
	Solved at: Aug/09/2021 12:36
*/

#include <iostream>

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
    int n, x, chq[11] = {0};
    bool flag = true;

    scanf("%d", &n);

    rep(i, 0, n)
    {
        scanf("%d", &x);
        chq[x]++;

        if(x != 1 && x != 2 && x != 3 && x != 4 && x != 6)
            flag = false;
    }

    if(flag && chq[1] == (chq[2]+chq[3]) && chq[1] == (chq[4] + chq[6]) && chq[3] <= chq[6])
    {
        rep(i, 0, chq[4]) printf("1 2 4\n");
        rep(i, 0, chq[2] - chq[4]) printf("1 2 6\n");
        rep(i, 0, chq[3]) printf("1 3 6\n");
    }
    
    else printf("-1\n");
}

int main()
{
	solve();

    return 0;
}
