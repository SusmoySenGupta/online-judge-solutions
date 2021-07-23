/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 510A
	problem name: Fox And Snake
	problem link: https://codeforces.com/problemset/problem/510/A

	Status: __Solved__
	Solved at: Jul/23/2021 11:17U
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

    scanf("%d %d", &n, &m);

    rep(i, 1, n+1)
    {
        rep(j, 1, m+1)
        {
            if(i%4 == 0)
                j == 1 ? printf("#") : printf(".");
            
            else if(i%2 == 0)
                j == m ? printf("#") : printf(".");
            
            else
                printf("#");
        }

        printf("\n");
    }
}

int main()
{
	solve();

    return 0;
}
