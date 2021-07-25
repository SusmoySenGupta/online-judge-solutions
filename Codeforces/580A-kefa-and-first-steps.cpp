/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 580A
	problem name: Kefa and First Steps
	problem link: https://codeforces.com/problemset/problem/580/A

	Status: ____
	Solved at: __
*/

#include <iostream>

#define INF (int)1e9
#define EPS 1e-9
#define MOD 1000000007ll
#define PI 3.14159
#define MAX 100005

#define lli long long int

#define rep(i, a, n) for (int i=a; i<n; i++)
#define per(i, a, n) for (int i=n-1; i>=a; i--)

using namespace std;

void solve()
{
    int n, arr[MAX], max_val = 0;

    scanf("%d", &n);

    rep(i, 0, n) scanf("%d", &arr[i]);

    rep(i, 0, n)
    {
        int count = 1;

        rep(j, i, n-1)
        {
            if(arr[j] <= arr[j+1]) count++;
            else break;
        }

        max_val = max(count, max_val);
    }

    printf("%d\n", max_val);
}

int main()
{
	solve();

    return 0;
}
