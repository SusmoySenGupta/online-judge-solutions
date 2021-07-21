/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1367B
	problem name: Even Array
	problem link: https://codeforces.com/problemset/problem/1367/B

	Status: __Solved__
	Solved at: Jul/22/2021 00:52
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
    int n, arr[MAX], count = 0, odd = 0;

    scanf("%d", &n);

    rep(i, 0, n)
    {
        scanf("%d", &arr[i]);
        if(arr[i]%2) odd++;
    }    

    if((n == 1 && arr[0]%2) || (odd != n/2))
    {
        printf("-1\n");
        return;
    }

    for(int i = 0; i < n; i += 2) if(arr[i]%2) count++;

    printf("%d\n", count);
}

int main()
{
    int t;

    scanf("%d", &t);

    while (t--) solve();

    return 0;
}
