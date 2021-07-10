/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no:
	problem name:
	problem link:

	Status: __Solved__
	Solved at: Jul/10/2021 12:23
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
    int n;

    scanf("%d", &n);

    per(i, 1, 10)
    {
        if(n%i  == 0)
        {
            printf("%d\n", n / i);
            
            rep(j, 0, n/i)
            {
                printf("%d ", i);
            }

            break;
        }
    }
}

int main()
{
	solve();

    return 0;
}
