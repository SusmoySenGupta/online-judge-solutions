/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 233A
	problem name: Perfect Permutation
	problem link: https://codeforces.com/problemset/problem/233/A

	Status: __Solved__
	Solved at: Jul/10/2021 19:49
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

    if(n%2)
        printf("-1\n");
    
    else
    {
        for(int i = 1; i <= n ; i += 2)
        {
            int a = i, b = i + 1;

            swap(a, b);

            printf("%d %d ", a, b);
        }

        printf("\n");
    }
}

int main()
{
	solve();

    return 0;
}
