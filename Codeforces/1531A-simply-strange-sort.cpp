/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1531A
	problem name: Simply Strange Sort
	problem link: https://codeforces.com/problemset/problem/1561/A

	Status: __Solved__
	Solved at: Aug/25/2021 21:32
*/

#include <iostream>
#include <algorithm>

#define INF (int)1e9
#define EPS 1e-9
#define MOD 1000000007ll
#define PI 3.14159
#define MAX 1003

#define lli long long int

#define rep(i, a, n) for (int i=a; i<n; i++)
#define per(i, a, n) for (int i=n-1; i>=a; i--)

using namespace std;

bool isSorted(int arr[], int n)
{
    rep(i, 0, n-1)
    {
        if(arr[i] > arr[i+1]) return false;
    }

    return true;
}
void solve()
{
    int n, arr[MAX];

    scanf("%d", &n);

    rep(i, 0, n) scanf("%d", &arr[i]);

    int ans = 0;

    while ( !isSorted(arr, n) ) 
    {
        for(int i = ans % 2 ; i + 1 < n; i += 2) if(arr[i] > arr[i+1]) swap(arr[i], arr[i+1]);

        ans++;
    }

   printf("%d\n", ans);  
}

int main()
{
    int t;

    scanf("%d", &t);

    while (t--) solve();

    return 0;
}
