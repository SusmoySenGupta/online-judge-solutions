/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no:
	problem name: Three Pairwise Maximums
	problem link: https://codeforces.com/problemset/problem/1385/A

	Status: __Solved__
	Solved at: Jul/09/2021 13:17
*/

#include <iostream>
#include <algorithm>

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
    int t,arr[5];

    scanf("%d", &t);

    while (t--)
    {
        rep(i, 0, 3)
            scanf("%d", &arr[i]);

        sort(arr, arr + 3);

        if(arr[1] != arr[2])
            printf("NO\n");
        
        else
            printf("YES\n%d %d %d\n", arr[0], arr[0], arr[2]);
    }
}

int main()
{
	solve();

    return 0;
}