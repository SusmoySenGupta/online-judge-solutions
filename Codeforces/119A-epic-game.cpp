/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 119A
	problem name: Epic Game
	problem link: https://codeforces.com/problemset/problem/119/A

	Status: __Solved__
	Solved at: Jul/12/2021 13:18
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

int gcd(int a , int b)
{
   if(b==0) return a;
   a%=b;
   return gcd(b,a);
}

void solve()
{
    int a[2], n, pos = -1;

    scanf("%d%d%d", &a[0], &a[1], &n);

    while(n > 0)
    {
        rep(i, 0, 2)
        {
            n -= gcd(a[i], n);

            if(n == 0)
            {
                pos = i;
                break;
            }
        }
    }

    printf("%d\n", pos);
}

int main()
{
	solve();

    return 0;
}
