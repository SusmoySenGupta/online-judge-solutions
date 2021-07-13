/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 34A
	problem name: Reconnaissance 2
	problem link: https://codeforces.com/problemset/problem/34/A

	Status: __Solved__
	Solved at: Jul/13/2021 18:27
*/

#include <iostream>
#include <cstdlib>

#define INF (int)1e9
#define EPS 1e-9
#define MOD 1000000007ll
#define PI 3.14159
#define MAX 102

#define lli long long int

#define rep(i, a, n) for (int i=a; i<n; i++)
#define per(i, a, n) for (int i=n-1; i>=a; i--)

using namespace std;

void solve()
{
    int n, arr[MAX];

    scanf("%d", &n);

    rep(i, 1, n+1) scanf("%d", &arr[i]);

    int min = abs(arr[1] - arr[2]), pos_a = 1, pos_b = 2;

    rep(i, 2, n)
    {
        int diff = abs(arr[i] - arr[i + 1]);
        if( diff < min)
        {
            min = diff;
            pos_a = i;
            pos_b = i + 1;
        }
    }

    if( abs(arr[n] - arr[1]) < min ){
        pos_a = n;
        pos_b = 1;
    }

    printf("%d %d\n", pos_a, pos_b);
}

int main()
{
	solve();

    return 0;
}
