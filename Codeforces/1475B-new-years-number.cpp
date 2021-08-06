/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1475B
	problem name: New Year's Number
	problem link: https://codeforces.com/problemset/problem/1475/B

	Status: __Solved__
	Solved at: Aug/06/2021 10:47
*/

#include <iostream>
#include <cstring>

#define INF  (int)1e9
#define EPS   1e-9
#define MOD 1000000007ll
#define PI 3.14159

#define lli long long int

#define rep(i, a, n) for (int i=a; i<n; i++)
#define per(i, a, n) for (int i=n-1; i>=a; i--)

using namespace std;

void solve()
{
	int n;
	
	scanf("%d", &n);

    int y = n % 2020;
    int x = (n-y)/2020 - y;

    if(x >= 0 && (2020*x + 2021*y) == n)
        printf("YES\n");
    else    
        printf("NO\n");
}

int main()
{
    int t;
	
    scanf("%d", &t);

    while (t--) solve();

    return 0;
}
