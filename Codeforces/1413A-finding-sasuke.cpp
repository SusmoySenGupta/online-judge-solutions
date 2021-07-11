/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1413A
	problem name: Finding Sasuke
	problem link: https://codeforces.com/problemset/problem/1413/A

	Status: __Solved__
	Solved at: Jul/11/2021 11:32
*/

#include <iostream>

#define INF (int)1e9
#define EPS 1e-9
#define MOD 1000000007ll
#define PI 3.14159
#define MAX 1003

#define lli long long int

#define rep(i, a, n) for (int i=a; i<n; i++)
#define per(i, a, n) for (int i=n-1; i>=a; i--)

using namespace std;

void solve()
{
    int t, n;

    scanf("%d", &t);

    while (t--)
    {
        int arr[MAX] = {0};

        scanf("%d", &n);

        rep(i, 0, n)
            scanf("%d", &arr[i]);

        per(i, n/2, n)
            printf("%d ", -1 * arr[i]);
        
        per(i, 0, n/2)
            printf("%d ", arr[i]);
        
        printf("\n");
    }
}

int main()
{
	solve();

    return 0;
}
