/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 381A
	problem name: Sereja and Dima
	problem link: https://codeforces.com/problemset/problem/381/A

	Status: __Solved__
	Solved at: Jul/18/2021 14:23
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

void solve()
{
    int n, arr[MAX], sr = 0, di = 0;

    scanf("%d", &n);

    rep(i, 0, n) scanf("%d", &arr[i]);

    for (int i=0, j=n-1, k=1; i <= j ; k++)
    {
        if(arr[i] > arr[j]) k%2 ? sr += arr[i++] : di += arr[i++];
        else k%2 ? sr += arr[j--] : di += arr[j--];
    }

    printf("%d %d\n", sr, di);
}

int main()
{
	solve();

    return 0;
}
