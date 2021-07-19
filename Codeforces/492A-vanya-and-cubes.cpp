/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no:
	problem name:
	problem link:

	Status: __Solved__
	Solved at: Jul/19/2021 10:49
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
    int n, height = 0, sum = 0;

    scanf("%d", &n);

    while(sum <= n)
    {
        height++;
        sum += (height * (height + 1)) / 2;
    }

    printf("%d\n", height - 1);
}

int main()
{
	solve();

    return 0;
}
