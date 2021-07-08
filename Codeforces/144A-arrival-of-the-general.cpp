/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 144A
	problem name: Arrival of the General
	problem link: https://codeforces.com/problemset/problem/144/A

	Status: __Solved__
	Solved at: Jul/08/2021 11:54
*/

#include <iostream>

#define INF (int)1e9
#define EPS 1e-9
#define MOD 1000000007ll
#define PI 3.14159
#define MAX 102

#define lli long long int

#define rep(i, a, n) for (int i=a; i<n; i++)
#define per(i, a, n) for (int i=n-1; i>=a; i--)

using namespace std;

void solve()
{
    int n, arr[MAX];

    scanf("%d", &n);

    rep(i, 0, n)
        scanf("%d", &arr[i]);

    int min = INF, max = -1, min_pos = -1, max_pos = -1;

    for(int i = 0, j = n - 1; i < n; i++, j--)
    {
        if(arr[j] < min)
        {
            min = arr[j];
            min_pos = j;
        }

        if(arr[i] > max)
        {
            max = arr[i];
            max_pos = i;
        }
    }

    int res = abs(1 - max_pos - 1) + (n - min_pos - 1);

    min_pos < max_pos ? cout << res - 1 << endl : cout << res << endl;
}

int main()
{
	solve();

    return 0;
}
