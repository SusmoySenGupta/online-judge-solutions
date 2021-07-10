/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 352A
	problem name: Jeff and Digits
	problem link: https://codeforces.com/problemset/problem/352/A

	Status: __Solved__
	Solved at: Jul/10/2021 16:14
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
    int n, x, count_0 = 0, count_5 = 0;

    scanf("%d", &n);

    while (n--)
    {
        scanf("%d", &x);

        x == 5 ? count_5++ : count_0++;
    }

    if (count_0 == 0)
        printf("-1\n");

    else if(count_5 >= 9 && count_0 >= 1) {
        rep(i, 0, (count_5 / 9) * 9)
            printf("5");
        rep(i, 0, count_0)
            printf("0");
    }

    else
        printf("0\n");
}

int main()
{
	solve();

    return 0;
}
