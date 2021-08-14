/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 149A
	problem name: Business trip
	problem link: https://codeforces.com/problemset/problem/149/A

	Status: __Solved__
	Solved at: Aug/14/2021 11:48
*/

#include <iostream>
#include <algorithm>

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
    int n, arr[15];

    scanf("%d", &n);

    rep(i, 0, 12) scanf("%d", &arr[i]);

    sort(arr, arr + 12);

    int count = 0, sum = 0;

    per(i, 0, 12) 
    {
        if(n <= 0) break;
        n -= arr[i];
        count++;
    }

    printf("%d\n", n > 0 ? -1 : count);
}

int main()
{
	solve();

    return 0;
}
