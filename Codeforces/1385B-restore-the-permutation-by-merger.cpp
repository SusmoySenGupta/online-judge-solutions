/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1385B
	problem name: Restore the Permutation by Merger
	problem link: https://codeforces.com/problemset/problem/1385/B

	Status: __Solved__
	Solved at: Jul/21/2021 01:56
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
    int n, arr[102], chq[55]={0};

    scanf("%d", &n);

    rep(i, 0, n * 2) scanf("%d", &arr[i]);
    
    rep(i, 0, n*2)
    {
        if( chq[arr[i]] == 0)
            printf("%d ", arr[i]);

        chq[arr[i]]++;
    }

    printf("\n");
}

int main()
{
    int t;

    scanf("%d", &t);

    while (t--) solve();

    return 0;
}
