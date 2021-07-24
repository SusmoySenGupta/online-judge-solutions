/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 155A
	problem name: I_love_%username%
	problem link: https://codeforces.com/problemset/problem/155/A

	Status: __Solved__
	Solved at: Jul/24/2021 10:00
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
    int n, x, max, min, count = 0;

    scanf("%d", &n);

    rep(i, 0, n)
    {
        scanf("%d", &x);

        if(i==0)
        {
            max = x;
            min = x;
        }

        else
        {
            if(x > max)
            {
                max = x;
                count++;
            }
            else if(x < min)
            {
                min = x;
                count++;
            }
        }
    }

    printf("%d\n", count);
}

int main()
{
	solve();

    return 0;
}
