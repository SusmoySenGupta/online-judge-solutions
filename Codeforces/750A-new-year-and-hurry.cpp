/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 750A
	problem name: New Year and Hurry
	problem link: https://codeforces.com/problemset/problem/750/A

	Status: __Solved__
	Solved at: Jul/23/2021 13:33
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
    int n, k, rem, count = 0, sum = 0;

    scanf("%d%d", &n, &k);

    rem = 240 - k;

    for(int i = 1; i <= n; i++)
    {
        sum += i * 5;

        if(sum <= rem)
            count++;
        else
            break;
    }

    printf("%d\n", count);
}

int main()
{
	solve();

    return 0;
}
