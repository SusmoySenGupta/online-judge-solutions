/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 129A
	problem name: Cookies
	problem link: https://codeforces.com/problemset/problem/129/A

	Status: __Solved__
	Solved at: Jul/12/2021 11:11
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
    int n, x;
    int count_even = 0, count_odd = 0, sum_odd = 0;

    scanf("%d", &n);

    rep(i, 0, n)
    {
        scanf("%d", &x);

        if (x%2)
        {
            count_odd++;
            sum_odd += x;
        }

        else
            count_even++;
    }

    sum_odd%2 ? printf("%d\n", count_odd) : printf("%d\n", count_even);
}

int main()
{
	solve();

    return 0;
}
