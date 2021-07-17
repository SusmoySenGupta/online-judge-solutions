/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1294A
	problem name: Collecting Coins
	problem link: https://codeforces.com/problemset/problem/1294/A

	Status: __Solved__
	Solved at: Jul/17/2021 20:07
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
    int arr[5], n;

    rep(i, 0, 3) scanf("%d", &arr[i]);

    scanf("%d", &n);

    int max_val = max(max(arr[0], arr[1]), arr[2]);

    rep(i, 0, 3)
    {
        int temp = max_val - arr[i];
        n -= temp;
        arr[i] += temp;
    }
    
    arr[0] == arr[1] && arr[1] == arr[2] && n >= 0 && n%3 == 0 ? printf("YES\n") : printf("NO\n");
}

int main()
{
    int t;

    scanf("%d", &t);

    while (t--) solve();

    return 0;
}
