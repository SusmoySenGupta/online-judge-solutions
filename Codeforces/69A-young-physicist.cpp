/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 69A
	problem name: Young Physicist
	problem link: https://codeforces.com/problemset/problem/69/A

	Status: __Solved__
	Solved at: Jul/17/2021 23:26
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
    int n, a, b, c, count_a = 0, count_b = 0, count_c = 0;

    scanf("%d", &n);

    while(n--)
    {
        scanf("%d%d%d", &a, &b, &c);

        count_a += a; count_b += b; count_c += c;
    }

    count_a == 0 && count_b == 0 && count_c == 0 ? printf("YES\n") : printf("NO\n");
}

int main()
{
	solve();

    return 0;
}
