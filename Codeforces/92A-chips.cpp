/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 92A
	problem name: Chips
	problem link: https://codeforces.com/problemset/problem/92/A

	Status: __Solved__
	Solved at: Jul/12/2021 20:58
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
    int n, m;
    bool flag = true;

    scanf("%d%d", &n, &m);

    while(flag)
    {
        for (int i = 1; i <= n; i++)
        {
            if(m < i)
            {
                printf("%d\n", m);
                flag = false;
                break;
            }
            m -= i;
        }
    }
}

int main()
{
	solve();

    return 0;
}
