
/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1088B
	problem name: Ehab and subtraction
	problem link: https://codeforces.com/problemset/problem/1088/B

	Status: __Solved__
	Solved at: Aug/06/2021 21:37
*/

#include <iostream>
#include <algorithm>

#define INF (int)1e9
#define EPS 1e-9
#define MOD 1000000007ll
#define PI 3.14159
#define MAX 100005

#define lli long long int

#define rep(i, a, n) for (int i=a; i<n; i++)
#define per(i, a, n) for (int i=n-1; i>=a; i--)

using namespace std;

void solve()
{
    int n, k, arr[MAX];
    lli x = 0;

    scanf("%d%d", &n, &k);

    rep(i, 0, n) scanf("%d", &arr[i]);

    sort(arr, arr + n);

    for(int i=0; i < n && k; i++)
    {
        lli temp = arr[i] - x;

        if(temp)
        {
            printf("%d\n", temp);

            x += temp;

            k--;
        }
    }

    while(k--) printf("0\n");
}

int main()
{
	solve();

    return 0;
}
