/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1399A
	problem name: Remove Smallest
	problem link: https://codeforces.com/problemset/problem/1399/A

	Status: __Solved__
	Solved at: Jul/24/2021 10:12
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

void solve()
{
    int n, arr[51]={0};

    scanf("%d", &n);

    rep(i, 0, n) scanf("%d", &arr[i]);
    
    sort(arr, arr + n);

    rep(i, 0, n)
    {
        if(arr[i+1] - arr[i] > 1)
        {
            printf("NO\n");
            return;
        }
    }

    printf("YES\n");
}

int main()
{
    int t;

    scanf("%d", &t);

    while (t--) solve();

    return 0;
}
