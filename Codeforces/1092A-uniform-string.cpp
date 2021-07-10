/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1092A
	problem name: Uniform String
	problem link: https://codeforces.com/problemset/problem/1092/A

	Status: __Solved__
	Solved at: Jul/10/2021 17:28
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
    int t, n, k;

    scanf("%d", &t);

    while (t--)
    {
        scanf("%d%d", &n, &k);

        for (int i = 0; i < n; i += k)
            for (int j = 0; j < k && i+j < n; j++)
                printf("%c", 'a' + j);
        
        printf("\n");
    }
}

int main()
{
	solve();

    return 0;
}
