/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1535B
	problem name: Array Reordering
	problem link: https://codeforces.com/problemset/problem/1535/B

	Status: __Solved__
	Solved at: Aug/10/2021 14:13
*/

#include <iostream>
#include <algorithm>

#define INF (int)1e9
#define EPS 1e-9
#define MOD 1000000007ll
#define PI 3.14159
#define MAX 2003

#define lli long long int

#define rep(i, a, n) for (int i=a; i<n; i++)
#define per(i, a, n) for (int i=n-1; i>=a; i--)

using namespace std;

int gcd(lli a , lli b)
{
   if(b == 0) return a;
   
   a %= b;

   return gcd(b,a);
}

void solve()
{
    int n, arr[MAX];

    scanf("%d", &n);

    rep(i, 0, n) scanf("%d", &arr[i]);

    sort(arr, arr + n, [](int x, int y){
        return x % 2 < y % 2;
    });

    int count = 0;

    rep(i, 0, n)
        rep(j, i+1, n) count += gcd(arr[i], 2 * arr[j]) > 1;

    printf("%d\n", count);
}

int main()
{
    int t;

    scanf("%d", &t);

    while (t--) solve();

    return 0;
}
